#include <iostream>

using namespace std;

int main() {

	int number1, number2, result;

	cout << "Number 1: ";
	cin >> number1;

	cout << "Number 2: ";
	cin >> number2;

	result = number1 + number2;

	if (result >= 1000) {
		cout << "result >= 1000...";
	}
	else if (result >= 500) {
		cout << "500 <= result < 1000";
	}
	else {
		cout << "result < 500";
	}
	
	return 0;
}
