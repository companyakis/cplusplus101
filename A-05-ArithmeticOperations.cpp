#include <iostream>

using namespace std;

int main() {

	int number1 = 45;

	int number2 = 12;

	int sum = number1 + number2;

	int diff = number1 - number2;

	int mult = number1 * number2;

	float division = (float) number1 / number2;

	int modulus = number1 % number2;

	float average = (float) (number1 + number2) / 2;

	cout << "Sum: " << sum << endl;

	cout << "Difference: " << diff << endl;

	cout << "Multiplication: " << mult << endl;

	cout << "Division: " << division << endl;

	cout << "Modulus: " << modulus << endl;

	cout << "Average: " << average << endl;

	/*	
Sum: 57
Difference: 33
Multiplication: 540
Division: 3.75
Modulus: 9
Average: 28.5	
	*/
	
}
