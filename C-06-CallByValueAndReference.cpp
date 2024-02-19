#include<iostream>    

using namespace std;

//call by value function
void functionCallByValue(int i) {
	i = i * 10;
	cout << "Value: " << i << endl;
}

//call by reference function
void functionCallByReference(int& i) {
	i = i * 10;
	cout << "Value: " << i << endl;
}

int main() { 

	int number = 20;

	functionCallByValue(number);

	cout << "Number: " << number << endl;

	cout << "----------------------------" << endl;

	functionCallByReference(number);
	cout << "Number: " << number << endl;

	return 0;
}


/*
Value: 200
Number: 20
----------------------------
Value: 200
Number: 200

*/
