#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int row = 1;
	while (row <= n)
	{
		int col = 1;
		while (col <= n - row)
		{
			cout << "	 ";
			col ++;
		}
		
		col = 1;
		int p = row;
		while (col <= row)
		{
			cout << p << "	 ";
			p ++;
            col++;
		}
		int s = 2 * row - 2;
		while (s >=row){
			cout << s <<"	";
			s--;
		}

		row ++;
		cout << endl;
	}

	return 0;
}