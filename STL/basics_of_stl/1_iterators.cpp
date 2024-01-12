# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <int> v = {10, 20, 30, 40, 50};

    vector <int> :: iterator i = v.begin();   // short cut is auto i
    cout << *i << endl ;    //10

    i = next(i, 2);     //30
    cout << *i << endl ;

    advance(i, 1);   //40
    cout << *i;
    return 0;


}