#include "Matrix.h"
#include "IMatrix.h"
#include "LinearEquationsSolver.h"
#include <iostream>
#include <math.h>

#define N_size 962
//#define N_size 1500

int main() {
	////Zadanie A
	//Matrix ex1_A = Matrix::generateCoefficientMatrix(10, -1, -1, N_size);
	//Matrix ex1_b = Matrix::generateResultsVector(5, N_size);


	////Zadanie B
	//Matrix resultJacobi = LinearEquationsSolver::Jacobi(ex1_A, ex1_b, pow(10, -9));
	//Matrix resultGaussSeidel = LinearEquationsSolver::Gauss_Seidel(ex1_A, ex1_b, pow(10, -9));

	//Zadanie C
	/*Matrix ex2_A = Matrix::generateCoefficientMatrix(3, -1, -1, N_size);
	Matrix resultJacobi2 = LinearEquationsSolver::Jacobi(ex2_A, ex1_b, pow(10, -9), N_size);
	Matrix resultGaussSeidel2 = LinearEquationsSolver::Gauss_Seidel(ex2_A, ex1_b, pow(10, -9), N_size);*/

	//Zadanie D
	Matrix ex1_A = Matrix::generateCoefficientMatrix(3, -1, -1, 5);
	Matrix ex1_b = Matrix::generateResultsVector(5, 5);
	Matrix resultLU = LinearEquationsSolver::LU_Factorization(ex1_A, ex1_b);
	resultLU.printMatrix();

	return 0;
}