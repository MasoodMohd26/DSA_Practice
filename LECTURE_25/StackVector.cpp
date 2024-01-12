#include <iostream>
#include <vector>
using namespace std;

class Stack{
    // public se upar jo bhi likhenge wo private ho jata
    vector <int> v;
public:
    void push(int d)
    {
        v.push_back(d);
    }
    void pop()
    {
        v.pop_back();
    }
    bool empty()
    {
        return (v.size() == 0);
        
    }
    int top()
    {
        if (empty() == 1)
        {
            cout <<"EMPTY STACK :";
            return -1;
        }
        return v[v.size()-1];
    }

};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
    
}