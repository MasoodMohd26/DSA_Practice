#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "enter a number : ";
    
    cin >> a;
    if (a > 10){
        cout << "number is greater than 10" << endl; 
    }
    else if (a == 10){
        cout << "number is equal to 10"<< endl;
    }
    else {
        cout << "number is less than 10" << endl ;

    }

    return 0;
}