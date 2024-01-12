#include <iostream>
//library
#include <stack>

using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    
    

    //top element
    cout << "TOP element -> " << s.top()<< endl;

    //pop
    s.pop();
    cout << "TOPE ELEMNET after pop -> "<< s.top() << endl;

    //size same


    // empty



    
    return 0;
}