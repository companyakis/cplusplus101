#include <iostream>

using namespace std;

int main() {

	for (int i = 2; i < 31; i++) {

		if (i % 4 == 0) {

			cout << "Number: " << i << endl;
      
		}
	}

	cout << "Loop ended...";

	return 0;
}

/*
Number: 4
Number: 8
Number: 12
Number: 16
Number: 20
Number: 24
Number: 28
Loop ended...
*/
