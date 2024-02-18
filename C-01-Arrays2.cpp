#include<iostream>    

using namespace std;
int main()
{  
	string names[] = { "mustafa", "kutluk", "aygun" };

	for (int i = 0; i < 3; i++) {
		cout << names[i] << " ";
	}

	cout << endl;

	double nums[] = { 3.14, 15, 7.77, -12.5 };

	for (int i = 0; i < 4; i++) {
		cout << nums[i] + 100 << " ";
	}

	return 0;
}

/*

mustafa kutluk aygun
103.14 115 107.77 87.5

*/
