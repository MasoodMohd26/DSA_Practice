#include<iostream>
using namespace std;
void WaveRow(int arr[][])
{
	cout << arr[0][0];
	cout << arr[0][1];
	cout << arr[1][0];
	cout << arr[1][1];
}
int main() {
	int arr[2][2] = {{1,2}, {3,4}};
	WaveRow(arr);
	return 0;
}