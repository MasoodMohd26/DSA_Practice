//enter only odd number greater than or equal to 5 
/*

*   *****
*   *
*   *
*   *
*********
    *   *
    *   *
    *   *
*****   *

*/

#include<iostream>
using namespace std;
int main() 
{
	int n,j;
	cin >> n;
	// 1st row 
	cout << "*";
	j = 1;
	while (j <= ((n/2) - 1))
	{
		cout << " ";
		j ++ ;
	}
	j=1;
	while (j <= ((n/2) + 1)){
		cout << "*";
		j++;
	}

	cout << endl;

	// upper half excluding top and middle row 
	int x = 1;
	while (x <= ((n/2) - 1)){
		cout << "*";
		int s = 1;
		while (s <= ((n/2) - 1))
		{
			cout << " ";
			s ++;
		}
		cout << "*";

		cout << endl;
		x ++;
	}


	

	// middle row
	j=1;
	while (j <= n)
	{
		cout << "*";
		j ++;
	}

	
	cout << endl;

	// lower half excluding the last row;
	int row = 1;
	while (row <= ((n/2)-1))
	{
		j = 1;
		while (j <= (n/2))
		{
			cout << " ";
			j ++;
		}
		cout << "*";
		j = 1;
		while (j <= ((n/2) - 1))
		{
			cout << " ";
			j ++;
		}
		cout << "*";
		row ++;
		cout << endl;
	}

	int a = 1;
	while (a <= ((n/2) +1)){
		cout << "*";
		a++;
	}
	a = 1;
	while (a <= ((n/2) -1)){
		cout << " ";
		a++;
	}
	cout << "*";

	


	return 0;
}