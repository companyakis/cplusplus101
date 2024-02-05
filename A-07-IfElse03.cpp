#include <iostream>

using namespace std;

int main() {

	int adminPassword = 123456;
	int userInput;

	cout << "Please, insert admin password: ";
	cin >> userInput;

	if (adminPassword == userInput) {
		cout << "Welcome, admin. Please, don't share your password!";
	}

	else {
		cout << "Wrong password! Please, try again later";
	}
	return 0;
}
