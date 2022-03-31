#include "VectorN.h"

void VectorN::setN(int value)
{
	if (value > 0)
	{
		N = value;
	}
	else
	{
		N = 0;
	}
}

string VectorN::toString() const
{
	stringstream RK; 
	for (int i = 0; i < N; i++)
	{
		RK << a[i] << " ";
	}

	return RK.str();
}

VectorN SumOfVectors(const VectorN& k, const VectorN& r)
{
	VectorN sm;
	sm.N = r.N;
	sm.Init(r.N);
	for (int i = 0; i < r.N; i++)
	{
		sm.a[i] = k.a[i] + r.a[i];
	}
	return sm;
}

VectorN SubtractionOfVectors(const VectorN k, const VectorN r)
{
	VectorN sb;
	sb.N = r.N;
	sb.Init(r.N);
	for (int i = 0; i < r.N; i++)
	{
		sb.a[i] = k.a[i] - r.a[i];
	}
	return sb;
}

double ScalarProductOfVector(const VectorN k, const VectorN r)
{
	double scal = 0;

	for (int i = 0; i < r.N; i++)
	{
		scal += (k.a[i] * r.a[i]);
	}

	return scal;
}

void VectorN::Init(int N)
{
	setN(N);
	a = new double[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = 0;
	}
}

void VectorN::Read()
{
	int N;
	cout << " Enter N = "; cin >> N;
	Init(N);
	for (int i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> a[i];
	}
}

void VectorN::Display() const
{
	cout << "( " << toString() << ")" << endl;
}

void  VectorN::Free()
{
	delete[] a;
}
