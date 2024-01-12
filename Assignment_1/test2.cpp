#include<iostream>
using namespace std;


int sum_dig(int n){
    int s = 0;
    while (n != 0){
        int digit = n %10;
        n = n/10;
        s += digit ;


    }
    return s;
}

bool check_prime (int n)
{
	if (n == 1 || n == 0 ){
		return false;
	}
	int i = 2;
	while (i <= n-1){
		if (n % i == 0){
			return false;

		}
		i ++;
	}
	return true;
}

int main ()
{
    cout << check_prime(31);
    return 0;
}