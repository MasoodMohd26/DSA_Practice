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
int main()
{
    node* head = NULL;
    node* tail = NULL;
    int n1;
    cin >> n1;
    for (int i=0; i<n1; i++)
    {
        int x;
        cin >> x;
        insertEnd(head, tail, x);
    }
    printLinkedList(head);

    node * left_head = NULL;
    node* left_tail = NULL;
    node * right_head = NULL;
    node* right_tail = NULL;
    node* n = NULL;
    while (head != NULL)
    {
        n = head;
        head = head -> next;
        n -> next = NULL;

        // even
        if (n -> data %2 != 0)
        {
            if (left_head == NULL)
            {
                left_head = left_tail = n;
            }
            else{
                left_tail -> next = n;
                left_tail = n;
            }
        }

        // odd
        else
        {
            if (right_head == NULL)
            {
                right_head = right_tail = n;
            }
            else{
                right_tail -> next = n;
                right_tail = n;
            }
        }
    }
    left_tail -> next = right_head;
    printLinkedList(left_head);
    return 0;
}
// 5
//1 2 3 4 5