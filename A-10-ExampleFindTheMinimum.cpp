#include <iostream>

using namespace std;

int main() {

	// find the minimum number among three numbers

	int number1, number2, number3, minimumNumber;

	cout << "Number 1: ";
	cin >> number1;

	cout << "Number 2: ";
	cin >> number2;

	cout << "Number 3: ";
	cin >> number3;

	if (number1 <= number2 && number1 <= number3) {
		minimumNumber = number1;
	}
	else if (number2 <= number1 && number2 <= number3) {
		minimumNumber = number2;
	}
	else {
		minimumNumber = number3;
	}

	cout << "The minimum number among three numbers: " << minimumNumber;

	return 0;
}
