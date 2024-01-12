#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // declaration part1
    cout << "DECLARATION 1 " << endl;
    vector<int> v{1, 2, 3, 4, 5};
    for (auto &it : v)
    { // note that in order to change values of vectors elts you need to add & symbol in for loop statement
        it = 2;
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // declaration2
    cout << "DECLARATION 2" << endl;
    vector<int> v2;  // 10 20
    v2.push_back(10);
    v2.push_back(20);
    for (auto i = v2.begin(); i != v2.end(); i++)  // 10 20
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "REVERSE FOR LOOP" << endl;
    for (auto it = v2.rbegin(); it != v2.rend(); it++){
        cout << *it<< " ";
    }// 20 10

    return 0;
}