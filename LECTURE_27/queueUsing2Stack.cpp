#include <iostream>
#include <stack>
using namespace std;
class Queue{
    stack<int>s1;
    stack<int>s2;
public:
    void push(int d)
    {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(d);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop()
    {
        if (s1.empty())
        {
            cout << "underflow";
        }
        else{
            s1.pop();
        }
    }
    bool empty()
    {
        return s1.empty();
    }
    int front()
    {
        return s1.top();
    }

};
int main()
{
    Queue q;
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();

    }
    
    return 0;
}