#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
    node()
    {
        
    }
};
//-----------------//InsertEnd
void insertEnd(node * &head, node* &tail, int val)
{
    node* n = new node(val);
    if (head == NULL)
    {
        head = tail = n;
        // head -> next = tail -> next = NULL;
        return;
    }
    else
    {
        tail -> next = n;
        tail = n;
    }
}

int main()
{
    node* head, tail;
    head = tail = NULL;
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        insertEnd(head,tail, x)
    }
    return 0;
}