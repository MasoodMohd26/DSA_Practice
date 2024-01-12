#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int row = 1;
	while (row <= n){
		if (row % 2 != 0)
		{
			int j = 1;
			while (j <= row)
			{
				cout << "1";
				j++;
			}
        }
		else {
            // if (row ==1){
            //     cout << "1";
            // }
            // else {
            cout << "1";
            int j = 1;
            while (j <= (row - 2))
            {
                cout << "0";
                j++;
            }
            cout << "1";
            // }
		}
		
		cout << endl;
		row ++;
	}
	return 0;
}