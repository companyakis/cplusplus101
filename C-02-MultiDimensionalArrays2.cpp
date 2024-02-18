#include<iostream>    

using namespace std;

int main()
{  
	//3 rows, 4 columns array
	int mulDimArr[3][4] = {{2, 5, 7, 12}, {22, -10, 9, 0}, {12, 77, 1, 4}};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << mulDimArr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

/*

2 5 7 12
22 -10 9 0
12 77 1 4

*/
