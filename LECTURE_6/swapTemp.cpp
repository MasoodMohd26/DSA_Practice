#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin >>a>>b;
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "A : " << a;
    cout << endl;
    cout << "B : " << b;

    
    return 0;
}