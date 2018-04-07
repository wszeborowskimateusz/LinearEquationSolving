#include "Matrix.h"
#include "IMatrix.h"
#include "LinearEquationsSolver.h"
#include <iostream>
#include <math.h>

#define N_size 962


int main() {
	////Zadanie A
	//Matrix exA_A = Matrix::generateCoefficientMatrix(10, -1, -1, N_size);
	//Matrix exA_b = Matrix::generateResultsVector(5, N_size);


	////Zadanie B
	//Matrix resultJacobi = LinearEquationsSolver::Jacobi(exA_A, exA_b, pow(10, -9));
	//Matrix resultGaussSeidel = LinearEquationsSolver::Gauss_Seidel(exA_A, exA_b, pow(10, -9));


	//Zadanie C
	/*Matrix exC_A = Matrix::generateCoefficientMatrix(3, -1, -1, N_size);
	Matrix resultJacobi2 = LinearEquationsSolver::Jacobi(exC_A, exA_b, pow(10, -9));
	Matrix resultGaussSeidel2 = LinearEquationsSolver::Gauss_Seidel(exC_A, exA_b, pow(10, -9));*/

	//Zadanie D
	//Matrix exD_A = Matrix::generateCoefficientMatrix(3, -1, -1, N_size);
	//Matrix exD_b = Matrix::generateResultsVector(5, N_size);
	//Matrix resultLU = LinearEquationsSolver::LU_Factorization(exD_A, exD_b);

	//////Zadanie E
	////N = 100
	//int N = 100;
	//std::cout << "N = " << N << std::endl;
	//std::cout << "------------------------------------------" << std::endl;
	//Matrix exE_A = Matrix::generateCoefficientMatrix(10, -1, -1, N);
	//Matrix exE_b = Matrix::generateResultsVector(5, N);
	//LinearEquationsSolver::Jacobi(exE_A, exE_b, pow(10, -9));
	//LinearEquationsSolver::Gauss_Seidel(exE_A, exE_b, pow(10, -9));
	////LinearEquationsSolver::LU_Factorization(exE_A, exE_b);
	//std::cout << "------------------------------------------" << std::endl;

	////N = 500
	//N = 500;
	//std::cout << "N = " << N << std::endl;
	//std::cout << "------------------------------------------" << std::endl;
	//exE_A = Matrix::generateCoefficientMatrix(10, -1, -1, N);
	//exE_b = Matrix::generateResultsVector(5, N);
	//LinearEquationsSolver::Jacobi(exE_A, exE_b, pow(10, -9));
	//LinearEquationsSolver::Gauss_Seidel(exE_A, exE_b, pow(10, -9));
	////LinearEquationsSolver::LU_Factorization(exE_A, exE_b);
	//std::cout << "------------------------------------------" << std::endl;

	////N = 1000
	//N = 1000;
	//std::cout << "N = " << N << std::endl;
	//std::cout << "------------------------------------------" << std::endl;
	//exE_A = Matrix::generateCoefficientMatrix(10, -1, -1, N);
	//exE_b = Matrix::generateResultsVector(5, N);
	//LinearEquationsSolver::Jacobi(exE_A, exE_b, pow(10, -9));
	//LinearEquationsSolver::Gauss_Seidel(exE_A, exE_b, pow(10, -9));
	////LinearEquationsSolver::LU_Factorization(exE_A, exE_b);
	//std::cout << "------------------------------------------" << std::endl;

	////N = 2000
	//N = 2000;
	//std::cout << "N = " << N << std::endl;
	//std::cout << "------------------------------------------" << std::endl;
	//exE_A = Matrix::generateCoefficientMatrix(10, -1, -1, N);
	//exE_b = Matrix::generateResultsVector(5, N);
	//LinearEquationsSolver::Jacobi(exE_A, exE_b, pow(10, -9));
	//LinearEquationsSolver::Gauss_Seidel(exE_A, exE_b, pow(10, -9));
	////LinearEquationsSolver::LU_Factorization(exE_A, exE_b);
	//std::cout << "------------------------------------------" << std::endl;

	////N = 3000
	//N = 3000;
	//std::cout << "N = " << N << std::endl;
	//std::cout << "------------------------------------------" << std::endl;
	//exE_A = Matrix::generateCoefficientMatrix(10, -1, -1, N);
	//exE_b = Matrix::generateResultsVector(5, N);
	//LinearEquationsSolver::Jacobi(exE_A, exE_b, pow(10, -9));
	//LinearEquationsSolver::Gauss_Seidel(exE_A, exE_b, pow(10, -9));
	////LinearEquationsSolver::LU_Factorization(exE_A, exE_b);
	//std::cout << "------------------------------------------" << std::endl;

	////N = 4000
	//N = 4000;
	//std::cout << "N = " << N << std::endl;
	//std::cout << "------------------------------------------" << std::endl;
	//exE_A = Matrix::generateCoefficientMatrix(10, -1, -1, N);
	//exE_b = Matrix::generateResultsVector(5, N);
	//LinearEquationsSolver::Jacobi(exE_A, exE_b, pow(10, -9));
	//LinearEquationsSolver::Gauss_Seidel(exE_A, exE_b, pow(10, -9));
	////LinearEquationsSolver::LU_Factorization(exE_A, exE_b);
	//std::cout << "------------------------------------------" << std::endl;


	return 0;
}