/*
* Author: Devin Sigley
* The 5th assignment of CSIS 2610.
* It takes two integers as input and counts from 1 to the
* first integer via steps of the second integer.
*/

#include <iostream>

using namespace std;

int main() {
	int num1, num2, numTotal = 0;

	cout << "Please enter a positive integer to count from 1 to: ";
	cin >> num1;
	cout << "Please enter a positive integer to increment by: ";
	cin >> num2;

	cout << "Counting to: " << num1 << endl;
	cout << "Increment by: " << num2 << endl;
	cout << "Output: ";

	for (int i = 1; i < num1; i += num2) {
		cout << i << " ";
		numTotal += i;
	}
	cout << "\nTotal: " << numTotal;

	return 0;
}