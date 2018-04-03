#include "Matrix.h"
#include "IMatrix.h"
#include <iostream>

int main() {
	//Zadanie A
	Matrix ex1_M = Matrix::generateCoefficientMatrix(10, -1, -1);
	Matrix ex1_b = Matrix::generateResultsVector(5);

	return 0;
}