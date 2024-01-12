#include <iostream>
#include <queue>
using namespace std;
class Stack{
    queue<int>q1;
    queue<int>q2;
public:
    void push(int d){
        if (q1.empty() and q2.empty()){
            q1.push(d);
        }
        else if (q1.empty())
        {
            q2.push(d);
        }
        else{
            q1.push(d);
        }

    }
    void pop(){
        if (q1.empty() and q2.empty())
        {
            cout << "underflow"<< endl;
            
        }
        else if (q2.empty())
        {
            while (q1.size() != 1)
            {
                int x = q1.front();
                q1.pop();
                q2.push(x);
            }
            
            q1.pop();
            
        }
        else
        {
            while (q2.size() != 1)
            {
                int x = q2.front();
                q2.pop();
                q1.push(x);
            }
            
            q2.pop();
            
        }

    }
    int top()
    {
        if (q1.empty() and q2.empty())
        {
            cout << "ERROR! Stack is empty, returning -1"<< endl;
            return -1;
        }
        else if (q2.empty())
        {
            while (q1.size() != 1)
            {
                int x = q1.front();
                q1.pop();
                q2.push(x);
            }
            int ret = q1.front();
            q1.pop();
            q2.push(ret);
            return ret;
        }
        else
        {
            while (q2.size() != 1)
            {
                int x = q2.front();
                q2.pop();
                q1.push(x);
            }
            int ret = q2.front();
            q2.pop();
            q1.push(ret);
            return ret;
        }
    }
    bool empty(){
        return q1.empty() && q2.empty();

    }
};
int main()
{
    Stack s;
    for (int i=0; i<4; i++)
    {
        s.push(i+1);
    }
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }

}