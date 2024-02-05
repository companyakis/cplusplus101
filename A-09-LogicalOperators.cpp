#include <iostream>

using namespace std;

int main() {

	bool condition1, condition2, condition3;

	condition1 = (10 >= 3) && (4 == 4);

	condition2 = (10 <= 20) || (5 != 5);

	condition3 = !(25 <= 15);

	cout << condition1 << endl; //true

	cout << condition2 << endl; //true

	cout << condition3 << endl; //true

	return 0;
}
