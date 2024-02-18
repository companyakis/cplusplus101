#include<iostream>    

using namespace std;

//f(x) = 2*x - 1
void f(int anArray[], int lenArray) {
	for (int i = 0; i < lenArray; i++) {
		anArray[i] = 2 * anArray[i] - 1;
	}
}

int main()
{  
	int arr[] = { 12, 21, 32, 45, -7 };

	f(arr, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

/*

23 41 63 89 -15

*/
