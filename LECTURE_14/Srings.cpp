#include <iostream>
using namespace std;
int main(){
    string s = "hello";
    cout << s << endl;
    getline(cin, s,'\n');
    cout << s << endl;
    s += " XXXXXXXXXXX";
    s.push_back('Q');
    cout << s;
    return 0;
}