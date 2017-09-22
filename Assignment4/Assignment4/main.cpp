/*
* Author: Devin Sigley
* The 4th assignment of CSIS 2610.
* It's a calculator capable of the four basic arithmetic operations.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int choice = 0;

	cout << "\tCalculator program.\n"
		 << "\t-------------------";
	// Display the main menu, have the user choose an operation.
	do {
		cout << "\nInput a number to choose your operation:\n"
			 << "1. Addition\n"
			 << "2. Subtraction\n"
			 << "3. Multiplication\n"
			 << "4. Division\n";
		cin >> choice;
	} while (choice < 1 || choice > 4);

	// Initialize variables for calculation purposes.
	double num1 = 0.0,
		   num2 = 0.0,
		   answer = 0.0;

	// Handle each math operation as a case.
	switch (choice) {
		// Addition
		case 1:
			cout << "You have chosen: Addition\n";
			cout << "Please enter the first number for your calculation: ";
			cin >> num1;
			cout << "Please enter the addend for your calculation: ";
			cin >> num2;

			answer = num1 + num2;
			cout << "The sum of " << num1 << " and " << num2 << " is " << answer << endl;
			break;
		// Subtraction
		case 2:
			cout << "You have chosen: Subtraction\n";
			cout << "Please enter the first number for your calculation: ";
			cin >> num1;
			cout << "Please enter the number to subtract by: ";
			cin >> num2;

			answer = num1 - num2;
			cout << "The difference of " << num1 << " and " << num2 << " is " << answer << endl;
			break;
		// Multiplication
		case 3:
			cout << "You have chosen: Multiplication\n";
			cout << "Please enter the first number for your calculation: ";
			cin >> num1;
			cout << "Please enter the multiplier for your calculation: ";
			cin >> num2;

			answer = num1 * num2;
			cout << "The product of " << num1 << " and " << num2 << " is " << answer << endl;
			break;
		// Division
		case 4:
			cout << "You have chosen: Division\n";
			cout << "Please enter the dividend for your calculation: ";
			cin >> num1;
			cout << "Please enter the divisor for your calculation: ";
			cin >> num2;

			answer = num1 / num2;
			cout << "The quotient of " << num1 << " and " << num2 << " is " << answer << endl;
			break;
	}

	return 0;
}

/*
Write a C++ program that simulates a calculator
Define the necessary variables to accomplish this task.
Have your program print out the result of the calculation.
Make sure to validate the user input and include comments in your code.
*/