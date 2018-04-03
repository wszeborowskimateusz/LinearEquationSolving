#pragma once
#include "Matrix.h"
#include "IMatrix.h"
#include <math.h>

static class LinearEquationsSolver
{
public:
	LinearEquationsSolver();
	~LinearEquationsSolver();

	static Matrix& Jacobi(Matrix, Matrix, double, int);
	static Matrix& Gauss_Seidel(Matrix, Matrix, double, int);

	static double Norm(Matrix);
};

