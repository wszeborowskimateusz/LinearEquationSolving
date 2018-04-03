#pragma once
#include <stdio.h>
#include <iostream>
#include <math.h>

class Matrix
{
public:
	Matrix(int N, int M);
	//Copy constructor
	Matrix(const Matrix&);
	~Matrix();

	static Matrix& generateCoefficientMatrix(double, double, double);
	static Matrix& generateResultsVector(double);

	void printMatrix();

	//Operators overloading 
	Matrix& operator = (const Matrix&);
	double* const operator [](int i);
	double* const operator [](int i) const;
	const Matrix operator * (const Matrix&) const;
	const Matrix operator * (const double) const;
	const Matrix operator + (const Matrix&) const;
	const Matrix operator - (const Matrix&) const;

protected:
	double** matrix;
	int N, M;
};

