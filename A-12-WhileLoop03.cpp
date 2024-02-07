#include <iostream>

using namespace std;

int main() {

	int num1;
	int num2;

	cout << "Number 1: ";
	cin >> num1;

	cout << "Number 2: ";
	cin >> num2;

	while (num2 > num1) {
		if (num1 % 3 == 0) {
			cout << "Number: " << num1 << endl;
		}
		num1++;
	}

	return 0;
}

/*
Number 1: 11
Number 2: 46
Number: 12
Number: 15
Number: 18
Number: 21
Number: 24
Number: 27
Number: 30
Number: 33
Number: 36
Number: 39
Number: 42
Number: 45
*/
