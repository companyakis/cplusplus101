#include <iostream>

using namespace std;

//void function and multiple parameters

//user name, user birth year, current year

void areYouYoung(string name, int birthYear, int currentYear) {
	int userAge = currentYear - birthYear;

	if (userAge < 70) {
		cout << name <<", your age is " << userAge << ". You are young:)" << endl;
	}
	else {
		cout << name << ", your age is " << userAge << ". You should feel young:)" << endl;
	}
}
	

int main() {

	//aygün
	areYouYoung("Aygun", 1990, 2024);

	//hakan
	areYouYoung("Hakan", 1940, 2024);

}

/*
Aygun, your age is 34. You are young:)
Hakan, your age is 84. You should feel young:)
*/
