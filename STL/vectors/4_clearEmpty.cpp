#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v{1,2,3};
    v.clear();
    cout << (v.empty());  // 1(true)

    return 0;
}