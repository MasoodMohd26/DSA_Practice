#include <iostream>
using namespace std;
int main(){
    int p,r,t;
    cout << " ENTER P R T IN THIS SEQUENCE : ";
    cin >> p >> r >> t;
    float si = (p*r*t)/100.0;  // 100.0 to make it float value
    cout << "Simple Interest is: "<<si<<endl;

    
    return 0;
}