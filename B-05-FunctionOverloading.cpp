#include <iostream>

using namespace std;

//function overloading

void welcomeFunction() {
	cout << "Welcome to our DeFi system!" << endl;
}

void welcomeFunction(string name) {
	cout << name << ", welcome to our Defi system!" << endl;
}

void welcomeFunction(int userID) {
	cout << "User " << userID << ", welcome to our Defi system!" << endl;
}

void welcomeFunction(string name, int userID) {
	cout << "User " << userID << ", your name is " << name << " and welcome to our Defi system!" << endl;

}
	

int main() {

	welcomeFunction();

	welcomeFunction("Mustafa");

	welcomeFunction(2024);

	welcomeFunction("Mustafa", 2024);

	return 0;
}

/*
Welcome to our DeFi system!
Mustafa, welcome to our Defi system!
User 2024, welcome to our Defi system!
User 2024, your name is Mustafa and welcome to our Defi system!
*/
