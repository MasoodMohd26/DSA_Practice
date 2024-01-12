#include <iostream>

//library 
# include <deque>

// doubly ended queue 
//push pop can be done from both sides 
//dynamis

using namespace std;
int main(){
    deque<int> d;
    // push back at the end
    //push front at the begining
    d.push_back(1);
    d.push_back(2);

    d.push_front(3);
    d.push_front(4);

    //d = 4 3 1 2
    cout << "DEQUE -> ";
    for(auto i:d){
        cout << i << " ";
    }
    cout<<endl;


    // can access indexing
    cout << " 2nd index element -> " << d.at(2) << endl;

    //empty 
    cout << "EMPTY STATUS -> " <<  d.empty() << endl;   // 0


    //size 
    cout << "Size before erase -> " << d.size() << endl ;
    cout << "DEQUE before erasing first 2 elemnts -> " ;
    for (auto it : d){
        cout << it << " ";
    }
    cout << endl;


    // erase
    d.erase(d.begin(), d.begin() + 2); // deleting 2 element from the startng4
    

    cout << "Size after erase -> " << d.size() << endl ;
    cout << "DEQUE after erasing first 2 elemnts -> " ;
    for (auto it : d){
        cout << it << " ";
    }
    cout << endl;


    
    return 0;
}