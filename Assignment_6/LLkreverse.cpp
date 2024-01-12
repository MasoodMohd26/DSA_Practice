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
void printLinkedList(node * head   )
{
    node* temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp ->next;
    }
    cout << "NULL" << endl;
    return;
}
void reverse(node* &head, node* & tail)
{
    node * p;
    node * c;
    node * n;
    p = NULL;
    c = head;

    while (c != NULL && n != NULL)
    {
        n = c-> next;
        c->next = p;
        p = c;
        c = n;

    }
    swap(head, tail);
}
node* k_reverse(node *h, int num, int k, int cnt =1)
{
    if (h == NULL)
    {
        return NULL;
    }
    
    
    // reverse sub linked list
    
    node *c = h;
    node * p = NULL;
    node *n;
    for ( int i=0; i<k; i++)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    
    h -> next = k_reverse(c, num,k, ++cnt);
    return p;


}
int main()
{
    int n,k;
    cin >> n >> k;
    node * head = NULL;
    node * tail = NULL;
    for (int i=1 ;i<=n; i++)
    {
        int x;
        cin >> x;
        insertEnd(head,tail,x);
    }

    printLinkedList(head);
    head = k_reverse(head,n,k);
    printLinkedList(head);
}