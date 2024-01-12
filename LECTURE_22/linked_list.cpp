#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node * next;
};
int main()
{
    node a ;
    a.data = 1;
    node b,c;
    b.data = 2;
    a.next = &b;
    c.data = 3;
    b.next = &c;
    c.next = NULL;
    cout << a.data << " --> " << (*a.next).data << endl;
    cout << a.next << endl;
    cout << a.data << " --> " << a.next -> data << " --> " << a.next -> next -> data;
    return 0;
}