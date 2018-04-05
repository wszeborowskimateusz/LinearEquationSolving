#include "LinearEquationsSolver.h"
#include <time.h>


LinearEquationsSolver::LinearEquationsSolver()
{
}


LinearEquationsSolver::~LinearEquationsSolver()
{
}

Matrix & LinearEquationsSolver::Jacobi(Matrix A, Matrix b, double residuumThreshold)
{
	clock_t begin = clock();

	int N_size = b.getN();

	Matrix* x = new Matrix(N_size, 1);
	Matrix* x_before = new Matrix(N_size, 1);
	Matrix* res = new Matrix(N_size, 1);
	// We set the result vector in first iteration to 1
	for (int i = 0; i < N_size; i++) {
		(*x)[i][0] = 1;
	}

	int numberOfIteration = 0;

	x_before = x;
	(*res) = A * (*x) - b;
	while (LinearEquationsSolver::Norm(*res) > residuumThreshold) {
		//std::cout << Norm(*res) << std::endl;
		for (int i = 0; i < N_size; i++) {
			double sum = 0.0;
			for (int j = 0; j < N_size; j++) {
				if (j != i)sum += A[i][j] * (*x)[j][0];
			}
			
			(*x_before)[i][0] = (b[i][0] - sum)/A[i][i];
		}
		x = x_before;
		numberOfIteration++;
		(*res) = A * (*x) - b;
	}
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	std::cout << "Jacobi number of iteration is " << numberOfIteration << std::endl;
	std::cout << "Jacobi time is " << elapsed_secs << std::endl;
	return *x;
}

Matrix & LinearEquationsSolver::Gauss_Seidel(Matrix A, Matrix b , double residuumThreshold)
{
	clock_t begin = clock();

	int N_size = b.getN();

	Matrix* x = new Matrix(N_size, 1);
	Matrix* res = new Matrix(N_size, 1);
	// We set the result vector in first iteration to 1
	for (int i = 0; i < N_size; i++) {
		(*x)[i][0] = 1;
	}
	int numberOfIteration = 0;
	(*res) = A * (*x) - b;
	while (LinearEquationsSolver::Norm(*res) > residuumThreshold) {
		//std::cout << Norm(*res) << std::endl;
		for (int i = 0; i < N_size; i++) {
			double sum = 0.0;
			for (int j = 0; j < N_size; j++) {
				if (j != i)sum += A[i][j] * (*x)[j][0];
			}
			(*x)[i][0] = (b[i][0] - sum) / A[i][i];
		}
		numberOfIteration++;
		(*res) = A * (*x) - b;
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	std::cout << "Gauss-Seidel number of iteration is " << numberOfIteration << std::endl;
	std::cout << "Gauss-Seidel time is " << elapsed_secs << std::endl;
	return *x;
}

Matrix & LinearEquationsSolver::LU_Factorization(Matrix A, Matrix b)
{
	int N_size = b.getN();

	Matrix *x = new Matrix(N_size, 1);
	Matrix y(N_size, 1);

	Matrix U = A;
	Matrix L = IMatrix(N_size);

	for (int k = 0; k < N_size - 1; k++) {
		for (int j = k + 1; j < N_size; j++) {
			L[j][k] = U[j][k] / U[k][k];
			for (int i = k; i < N_size; i++) {
				U[j][i] = U[j][i] - (L[j][k]) * U[k][i];
			}
		}
	}
	y[0][0] = b[0][0]/L[0][0];
	for (int i = 1; i < N_size; i++) {
		double tmp_sum = 0.0;
			for (int j = 0; j < i; j++) {
				tmp_sum += L[i][j] * y[j][0];
			}
		y[i][0] = 1 / L[i][i] * (b[i][0] - tmp_sum);
	}

	(*x)[N_size-1][0] = y[N_size-1][0] / U[N_size-1][N_size-1];
	for (int i = N_size - 2; i >= 0; i--) {
		double tmp_sum = 0.0;
		for (int j = N_size-1; j > i; j--) {
			tmp_sum += U[i][j] * (*x)[j][0];
		}
		(*x)[i][0] = 1 / U[i][i] * (y[i][0] - tmp_sum);
	}
	


	return *x;
}

double LinearEquationsSolver::Norm(Matrix c)
{
	double norm = 0.0;
	if (c.getM() == 1 && c.getN() >= 1) {
		for (int i = 0; i < c.getN(); i++) {
			norm += c[i][0] * c[i][0];
		}
	}
	return sqrt(norm);
}
