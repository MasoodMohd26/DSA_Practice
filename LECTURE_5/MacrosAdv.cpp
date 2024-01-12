#include <iostream>
using namespace std;
// to define multin line macro use "\" to indicate that next line is in macro
// remember that last line should not be have \ character

#define FOR(n) for (int i = 1; i<=n; i++)\
{\
    cout << i <<" ";\
}
int main (){
    
    FOR(10);

    return 0;
}
