#include <iostream>
using namespace std;

int main()
{
	// Create double pointer.
	double* number; // OR double *number;

	// Create double.
	double nine = 9.0;

	// Assigns double's memory address to double pointer.
	number = &nine;

	// Create a double reference and assign it to the double.
	double& aliasForNine = nine;

	cout << "pointer's memory address: " << number << endl;
	cout << "pointer dereferenced: " << *number << endl;
	cout << "pointer's address, " << number << " is the same as reference's address, " << &aliasForNine << endl;

	return 0;
}