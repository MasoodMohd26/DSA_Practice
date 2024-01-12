#include <bits/stdc++.h>

using namespace std;
int main()
{
    priority_queue<int>h;
    h.push(9);
    h.push(2);
    h.push(1);
    h.push(0);
    h.push(3);
    h.push(5);
    
    
    while(!h.empty()){
        cout << h.top()<< " ";
        h.pop();
        
    }
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> h1;
    h1.push(9);
    h1.push(2);
    h1.push(1);
    h1.push(0);
    h1.push(3);
    h1.push(5);
    
    
    while(!h1.empty()){
        cout << h1.top()<< " ";
        h1.pop();
        
    }

    
    return 0;

    // return 0;
}