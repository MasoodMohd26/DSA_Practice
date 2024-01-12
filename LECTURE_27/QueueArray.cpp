#include <iostream>
using namespace std;
class Queue
{
    int *a;
    int f,e,cs,n;
public:
    Queue(int _n)
    {
        a = new int[_n];
        n = _n;
        f = cs = 0;
        e = n-1;
    }
    void push(int d)
    {
        if (cs < n)
        {
            e = (e+1)%n;
            a[e] = d;
            cs++;

        }
        else{
            cout << "overflow\n";
        }
    }
    void pop()
    {
        if (cs >0)
        {
            f = (f+1) %n;
            cs--;
        }
        else{
            cout << "underflow\n";
        }
    }
    int front()
    {
        return a[f];
    }
    bool empty()
    {
        return cs == 0;
    }
    int size()
    {
        return cs;
    }

};
int main()
{
    
    Queue q(4);
    for (int i=0; i<5; i++){
        q.push(i);
    }
    for (int i=0; i<5; i++){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}