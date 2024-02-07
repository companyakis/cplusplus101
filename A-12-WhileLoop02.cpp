#include <iostream>

using namespace std;

int main() {

	int i = 0;

	//false condtion!
	while (12 > 25) {
		cout << "Number_" << i + 1 << " is equal to: " << i + 1 << endl;
		i++;
	}

	cout << "i value is equal to: " << i << endl;
	cout << "While loop ended";
	
	return 0;
}

/*
i value is equal to: 0
While loop ended
*/
