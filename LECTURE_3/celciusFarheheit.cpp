// #include <iostream>
// using namespace std;
// int main(){
//     int init, final, step;
//     cin >> init >> final >> step;
//     int far = init;
//     while (far <= final){
//         int c = (5/9.0)*(far - 32);
//         cout << far << " " << c <<  endl;
//         far = far + step;
//     }


    
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
	int s, f, j;
	cin >> s >> f >> j;
	int i =s;
	while (i <= f){
		cout << i << " ";
		int c = (5/9.0)*(i - 32);
		i = i +j;
		cout << c << endl;
	} 
	return 0;
}