#include <iostream>

using namespace std;

int main() {
	cout << "Please, insert a number: " ;

	int userInput; 

	cin >> userInput;

	for (int i = 1; i <= userInput; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
			
		}
		cout << endl;	
	}
}

/*
Please, insert a number: 6
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/
