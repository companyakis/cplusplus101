#include <iostream>

using namespace std;

int main() {

	int i = 0;

	while (i <= 5) {
		cout << "Number_" << i + 1 << " is equal to: " << i + 1 << endl;
		i++;
	}

	cout << "While loop ended";
	
	return 0;
}

/*
Number_1 is equal to: 1
Number_2 is equal to: 2
Number_3 is equal to: 3
Number_4 is equal to: 4
Number_5 is equal to: 5
Number_6 is equal to: 6
While loop ended
*/
