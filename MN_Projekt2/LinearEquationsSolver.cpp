#include "LinearEquationsSolver.h"

#define N_SIZE 962


LinearEquationsSolver::LinearEquationsSolver()
{
}


LinearEquationsSolver::~LinearEquationsSolver()
{
}

Matrix & LinearEquationsSolver::Jacobi(Matrix A, Matrix b, double residuumThreshold, int N_size)
{
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
	std::cout << "Jacobi number of iteration is " << numberOfIteration << std::endl;
	return *x;
}

Matrix & LinearEquationsSolver::Gauss_Seidel(Matrix A, Matrix b , double residuumThreshold, int N_size)
{
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
	std::cout << "Gauss-Seidel number of iteration is " << numberOfIteration << std::endl;
	return *x;
}

double LinearEquationsSolver::Norm(Matrix c)
{
	double norm = 0.0;
	if (c.getM() == 1 && c.getN() > 1) {
		for (int i = 0; i < c.getN(); i++) {
			norm += c[i][0] * c[i][0];
		}
	}
	return sqrt(norm);
}
