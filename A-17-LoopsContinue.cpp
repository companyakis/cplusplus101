#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i <= 15; i = i + 2) {
		if (i % 11 == 1) {
			continue;
		}
		cout << i << " ";
	}
}

/*
0 2 4 6 8 10 14
*/
