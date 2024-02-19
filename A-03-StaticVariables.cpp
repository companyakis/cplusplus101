#include<iostream>    

using namespace std;

//static variables
//lifetime memory allocation!

void f1() {
	int x = 0;
	x++;
	cout << "x value is: " << x << endl;
}

void f2() {
	//static!
	static int x = 0;
	x++;
	cout << "x value is: " << x << endl;
}

int main()

{  
	f1();
	f1();
	f1();
	f1();

	cout << "----------------" << endl;

	f2();
	f2();
	f2();
	f2();

	return 0;
}


/*

x value is: 1
x value is: 1
x value is: 1
x value is: 1
----------------
x value is: 1
x value is: 2
x value is: 3
x value is: 4

*/
