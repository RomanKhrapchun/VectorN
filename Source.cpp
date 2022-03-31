#include "VectorN.h"

int main()
{
	VectorN f;
	f.Read();
	cout << "f = ";
	f.Display();


	VectorN s;
	s.Read();
	cout << "s = ";
	s.Display();


	VectorN sm = SumOfVectors(f, s);
	sm.Display();


	VectorN sb = SubtractionOfVectors(f, s);
	sb.Display();

	double SPV = ScalarProductOfVector(f, s);
	cout << "Result= " << SPV << endl;

	return 0;
}
