#include <iostream>
#include<list>
//doubly linkd list
//direct access not possible

using namespace std;
int main(){
    list<int> l;

    //same push pop back front work
    l.push_back(1);

    l.push_front(2);
    l.push_back(3);

    cout << "LIST -> ";
    for (auto i : l){
        cout << i << " ";
    }
    cout << endl;

    // erase  O(n) complexiyt
    l.erase(l.begin());
    cout << "LIST AFTER ERASE -> ";
    for (auto i : l){
        cout << i << " ";
    }
    cout << endl;

    //size same


    //copying list
    list <int> copy(l);
    cout<<"Copied List: ";
    for( auto x:copy ) {
        cout<<x<<" ";
    }
    cout << endl;
    // new initialisation
    list <int> n(4,0);
    cout<<"New Initialised with size=4 and value = 0 ->";
    for( int val:n ){
        cout<<val<<" ";
    }
    

    
    return 0;
}