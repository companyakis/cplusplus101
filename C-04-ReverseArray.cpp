#include<iostream>    

using namespace std;

int main()
{  
	cout << "Please, type five numbers: " << endl;

	int arr[5];

	for (int i = 0; i < 5; i++) {
		cout << "Type number_" << i + 1 << endl;
		cin >> arr[i];
	}

	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << " ";
	}

	return 0;
}

/*

Please, type five numbers:
Type number_1
21
Type number_2
-23
Type number_3
49
Type number_4
987
Type number_5
214
214 987 49 -23 21

*/
