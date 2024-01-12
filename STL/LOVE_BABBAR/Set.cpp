#include <iostream>
//store uniqueu elt only
// sorted way
// unordered set is faster
#include <set>
using namespace std;
int main(){
    set <int> s;

    //insert O(logn)
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    for (auto it : s)
    {
        cout << it << ' ';
    }
    cout << endl;

    //erase
    s.erase(s.begin());
    
    for (auto it : s)
    {
        cout << it << ' ';
    }
    cout << endl;
    

    //count checks if elt presetn in set or not
    cout << "5 present or not -> " << s.count(5) << endl;

    
    return 0;
}