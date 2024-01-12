#include <iostream>
using namespace std;
int main (){
    if (1)
    {
        int a =2;
        if (1)
        {
            cout << a; 
            // okay coz as a not found in this scope
            // search will be done outside this scope 
        }
    }
    /*
    not okay coz a is not in its scpe and outside it;
    rather its inside it
    */
    // cout << a;


    return 0;
}