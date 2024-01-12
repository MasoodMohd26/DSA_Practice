#include<iostream>
using namespace std;
int main() 
{
	int x;
	cin >> x;
	int i =1;
	int n = x/2 +1;
	while (i <= n){



		if (i == 1){
			int j =1;
			while (j <= 2*n - 2*i)
			{
				cout << "  ";
				j ++;
			}
            cout << i;
		}
		// upper half

			// space print
        else
		{
        int j =1;
		while (j <= 2*n - 2*i)
		{
			cout << "  ";
			j ++;
		}
			// reverse counting print
		j =i;
		while (j >= 1)
		{
			cout << j << " ";
			j --;
		}
			// space print
		j=1;
		while (j <= 2*i - 3){
			cout << "  ";
			j++;

		}
            // fwd counting print
		j = 1;
		while (j <= i){
			cout << j << " ";
			j ++;
		}
        }

		i ++;
		cout << endl;
	}

	n = x/2 + 1;
	// lower half pattern
    int row = 1;
    while(row <= n)
    {
            // handle top line case
        if (row == 1)
        {
            row ++;
            continue;
        }
        else if (row == n){
           int k = 1;
            while (k <= 2*row -2)
            {
                cout << "  ";
                k ++;
            } 
            cout << 1;
            row ++ ;
            cout << endl;
        }
        else
        {int k = 1;
        while (k <= 2*row -2)
        {
            cout << "  ";
            k ++;
        }
        k = n + 1 -row;
        while (k >= 1){
            cout << k << " ";
            k--;
        }
        k = 1;
        while (k <= 2*(n) - 2*row - 1){
            cout << "  ";
            k ++;
        }
        
        k = 1;
        while (k <= (n) -row +1)
        {
            cout << k << " ";
            k ++;
        }

        row ++;
        cout << endl;
        }
    }
	
	return 0;
}