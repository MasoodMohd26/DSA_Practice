#include<iostream>
using namespace std;
int  rev(int n)
{
	int rev_num = 0;
	int len = 0;
	int t = n;
	while (t != 0)
	{
		len ++;
		t = t/10;
	}

	int sf = 1;
	int i = 1;
	while (i <= len - 1)
	{
		sf = sf * 10;
		i ++;  
	}

	while (n != 0){
		int digit = n % 10;
		n = n/10;
		rev_num = rev_num + sf * digit;
		sf = sf / 10;
	}
	return rev_num;
}

int main(){
    cout << rev(1010101010);
    return 0;
}