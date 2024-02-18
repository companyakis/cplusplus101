#include<iostream>    

using namespace std;

int main()
{  
	//3 rows, 4 columns array
	int mulDimArr[3][4] = {{2, 5, 7, 12}, {22, -10, 9, 0}, {12, 77, 1, 4}};

	//print -10
	cout << "The only negative value of our array is: " << mulDimArr[1][1] << endl;

	return 0;
}

/*

The only negative value of our array is: -10

*/
