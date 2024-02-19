#include<iostream>    

using namespace std;

int main()

{  
	int number1, number2;
	double division;

	cout << "We will calculate number 1 / number 2. \nPlease, type number 1: ";
	cin >> number1;

	cout << "Please, type number 2: ";
	cin >> number2;

	try {
		if (number2 == 0) {
			throw 101;
		}
		division = number1 / number2;
		cout << "Division result: " << division;
	}
	catch (int e) {
		cout << "Zero division error! Number 2 can't be equal to zero...";
	}

	return 0;
}


/*
We will calculate number 1 / number 2.
Please, type number 1: 45
Please, type number 2: 0
Zero division error! Number 2 can't be equal to zero...

*/
