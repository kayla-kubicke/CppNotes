#include <iostream>
using namespace std;

//
// CALL BY VALUE
// void swap(double a, double b)
// {
// 	double temp;
//
// 	temp = a;
// 	a = b;
// 	b = temp;
// } // swap(c, d), c and d unaltered

//
// PASS BY REFERENCE
// void swap(double& a, double& b)
// {
// 	double temp = a;
// 	a = b;
// 	b = temp;
// } // swap(c, d)

//
// PASS BY POINTER
// void swap(double* a, double* b)
// {
// 	// double tmp = *a;
// 	// *a = *b;
// 	// *b = tmp;
// 	double temp = *a;
// 	*a = *b;
// 	*b = temp;
// } // swap(&c, &d)


int main()
{
	double c = 1.1;
	double d = 2.2;

	// swap(c, d);
	// swap(&c, &d);

	cout << "c: " << c << endl;
	cout << "d: " << d << endl;

	return 0;
}