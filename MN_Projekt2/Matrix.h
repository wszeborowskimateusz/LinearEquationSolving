#pragma once
#include <stdio.h>

class Matrix
{
public:
	Matrix(int N, int M);
	//Copy constructor
	Matrix(const Matrix&);
	~Matrix();

	//Operators overloading 
	Matrix& operator = (const Matrix&);
	double* const operator [](int i);
	double* const operator [](int i) const;
	const Matrix operator * (const Matrix&) const;

protected:
	double** matrix;
	int N, M;
};

