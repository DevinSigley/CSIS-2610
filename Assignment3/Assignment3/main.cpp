/*
* Author: Devin Sigley
* The 3rd assignment of CSIS 2610.
* It calculates a total when given a subtotal.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const double SALES_TAX = 0.065;
	double tax = 0.0,
		   dblSubtotal = 0.0,
		   total = 0.0;

	// Asking the user for their subtotal input, with basic data validation.
	cout << "This program calculates your total bill (tax included).\n";
	do {
		cout << "Please enter a valid subtotal (greater than zero): ";
		cin >> dblSubtotal;
	} while (dblSubtotal <= 0.0);
	
	// Calculating the added tax and subsequent total.
	tax = dblSubtotal * SALES_TAX;
	total = dblSubtotal + tax;

	// Outputting the user's receipt in dollar form.
	cout << fixed << setprecision(2);
	cout << "Here is Your Receipt: \n";
	cout << "Subtotal: $" << dblSubtotal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total amount Due: $" << total << endl;
	return 0;
}