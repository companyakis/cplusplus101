#include <iostream>

using namespace std;

int main() {

	string adminPassword = "Qwer1234";

	string userInput;

	do {
		cout << "Please, insert admin password: ";

		cin >> userInput;

	} while (userInput != adminPassword);

	cout << "Welcome, admin!..";
	
	return 0;
}

/*
Please, insert admin password: 14asd
Please, insert admin password: 45Qwerrtt
Please, insert admin password: Qwer1234
Welcome, admin!..
*/
