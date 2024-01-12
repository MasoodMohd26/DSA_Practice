#include<iostream>
using namespace std;
int main () {
	char c;
	c = cin.get();
	while (c != '\n')
	{
		
		if (c == '0'){
			cout << '5';
		}
		else {
            cout <<"hi";
			cout << c;
		}
		c = cin.get();
	}
	return 0;
}