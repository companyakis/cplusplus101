#include <iostream>

using namespace std;

int main() {

	int userInput, factorial;
	factorial = 1;

	cout << "Please, insert a number bigger than zero: ";
	cin >> userInput;

	for (int i = 1; i <= userInput; i++) {
		factorial = factorial * i;
	}

	cout << "Factorial: " << factorial;

	return 0;
}

/*
Please, insert a number bigger than zero: 6
Factorial: 720

Please, insert a number bigger than zero: 4
Factorial: 24
*/
