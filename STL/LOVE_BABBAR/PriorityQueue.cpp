#include <iostream>
#include <queue>
using namespace std;
int main(){

    //max heap;
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    
    cout << "MAX HEAP -> ";
    while (!maxi.empty()){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout <<endl;

    cout << "min HEAP -> ";
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    while (!mini.empty()){
        cout<<mini.top()<<" ";
        mini.pop();
    }

    cout << endl;

    // empty
    cout << "Khali ho kya min bhai ? "<< mini.empty();





    
    return 0;
}