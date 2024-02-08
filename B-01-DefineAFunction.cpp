#include <iostream>

using namespace std;

//define square function

int square(int i) {
	int result = 0;
	result = i * i;
	return result;
}

int main() {

	//let's call our function two times

	cout << "Square of 12: " << square(12) << endl;

	int squareOf15 = square(15);

	cout << "Square of 15: " << squareOf15 << endl;

}

/*
Square of 12: 144
Square of 15: 225
*/
