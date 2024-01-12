#include <iostream>

// library
#include <vector>

// continuos memory location
// using geometric dynamic array


using namespace std;
int main(){

    vector <int> v;

    //alternat initialisatrion;
    //5 is size,  3 is initialising elemnt  
    vector <int> a(5,3);

    for (auto it: a){
        cout << it << " ";
    }
    cout << endl;

    //copying vector into another vector
    vector <int> copied(a);

    cout << "copied vector -> ";
    for (auto i : copied ){
        cout << i << " ";
    }
    cout << endl;

    // CAPACITY -> memory assigned
    // SIZE -> no of element stored

    //capacity
    cout << "SIZE ->" << v.capacity()<< endl;

    // push back at the end like append
    v.push_back(1);
    cout << "SIZE ->" << v.capacity()<< endl;

    v.push_back(2);
    cout << "SIZE ->" << v.capacity()<< endl;
    
    v.push_back(3);
    cout << "SIZE ->" << v.capacity()<< endl;

    //at function
    cout << "2nd INDEX ->" << v.at(2) << endl;
    cout << "normal array acces -> "  << v[2] << endl;


    // front back
    cout <<"first elemnt : " << v.front() << endl;
    cout << "last elemnt : " << v.back() << endl;

    // looping
    cout << "before pop -> ";
    for (auto it : v){
        cout << it << " ";
    }

    cout << endl<< " after pop -> ";

    //pop back
    v.pop_back();
    for (auto it : v) {
        cout << it << ' ';
    }
    cout << endl;

    //size()
    cout << "BEFORE CLEAR SIZE ->" << v.size()<< endl;
    cout << "BEFORE CLEAR CAPACITY ->" << v.capacity()<< endl;

    // clear function se size 0 ho jata hai but not capacity
    v.clear();

    cout << "AFTER CLEAR SIZE ->" << v.size() << endl;
    cout << "AFTER CLEAR CAPACITY ->" << v.capacity() << endl;



    return 0;
}