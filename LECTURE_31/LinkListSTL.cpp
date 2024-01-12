#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_back(3);
    l.push_back(4);

    cout << "NULL <-- ";
    for (auto it:l)
    {
        cout << it << " <--> ";
    }
    cout << "NULL\n";

    //Iteration on alinked list using iteratot
    
    return 0;
}