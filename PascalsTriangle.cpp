#include <iostream>
using namespace std;


int pascalNumber(int row, int column)
{
	if(column == 0 || row == column) // Base case: Top of triangle and edges of triangle always equal 1.
	{
		return 1;
	}
	else // Recursive step: Add the two numbers directly above from the previous column.
	{
		return pascalNumber(row - 1, column - 1) + pascalNumber(row - 1, column);
	}
}

void pascalHelper(int rows)
{
	// Iterate over rows.
	for(int currentRow = 0; currentRow < rows; currentRow++)
	{
		// Create row.
		for(int column = 0; column <= currentRow; column++)
		{
			cout << pascalNumber(currentRow, column);
		}
		cout << endl;
	}
}

int main()
{
	pascalHelper(3);

	return 0;
}