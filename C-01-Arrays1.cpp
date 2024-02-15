#include <iostream>

using namespace std;


int main() {

	int myArray[3];

	myArray[0] = 101;

	myArray[1] = 201;

	myArray[2] = -50;

	for (int i = 0; i < 3; i++) {
		cout << myArray[i] << " ";
	}
	return 0;
}

/*
101 201 -50
*/
