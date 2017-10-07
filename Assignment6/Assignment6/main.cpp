/*
* Author: Devin Sigley
* The 6th assignment of CSIS 2610.
* It's a modified version of preexisting code,
* demonstrating use of a function to be more modular.
*/

#include <iostream>
using namespace std;

void displayRange(int endPoint);

int main()
{
	double num;

	cout << "Please enter a number: ";
	cin >> num;

	displayRange(num);
	return 0;
}

void displayRange(int endPoint) {
	int sum = 0;
	for (int i = 1; i <= endPoint; i++) {
		sum += i;
		cout << "Current number: " << i << endl;
		cout << "Total so far: " << sum << endl;
	}
	cout << "Your total is: " << sum << endl;
}