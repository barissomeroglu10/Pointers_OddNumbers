/*
This code calculates odd sum (with Pointers, Functions) from 1 to the number which is entered by user.

Developer = Barış Someroğlu
Date = 28.04.2024 - 05:00 pm
*/

#include <iostream>

using namespace std;

// Function prototype
int PointerOddTotal(int*);

int main()
{
	int Number;

	cout << "Please enter a number = ";
	cin >> Number;

	cout << endl;

	int* ptrNumber = &Number; // Pointer declaration

	cout << "\nResult = " << PointerOddTotal(&Number) << endl; // Call function

	return 0;
}

// Function definition
int PointerOddTotal(int* ptrNumber)
{
	int Total = 0;

	for (int i = 1; i <= *ptrNumber; i = i + 2)
	{
		Total += i;

		cout << "Odd Number is " << i << " -----> " << "Total is " << Total << endl;
	}

	return Total;
}
