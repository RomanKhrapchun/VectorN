#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class VectorN
{
private:

	int N;
	double* a;

public:

	int getN() const { return N; }
	void setN(int value);

	string toString() const;

	friend VectorN SumOfVectors(const VectorN& k, const VectorN& r);
	friend VectorN SubtractionOfVectors(const VectorN k, const VectorN r);
	friend double ScalarProductOfVector(const VectorN k, const VectorN r);

	void Init(int N);
	void Read();
	void Display() const;
	void Free();
};
