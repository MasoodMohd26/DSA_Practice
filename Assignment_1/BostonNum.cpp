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

// 
int first_prime(int n)
{
    if (n == 1 || n == 0) {
        return 0;
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            if (check_prime(i) == true) {
                return i;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
    return n; // Return n if it is prime itself
}

int main() {
	int n;
	cin >> n;
	int x = n, y=n;
	int sum = 0;
	while (x != 1)
	{
		int fac = first_prime(x);
		sum += fac;
		x = x / fac;
	}
	if ( sum == sum_dig(y) ){
		cout << 1;
	}
	else {
		cout << 0;
	}
    
	return 0;
}