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
void insertEndNode(node * &head, node* &tail, node* n)
{
    
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
    // cout << "NULL" << endl;
    return;
}

node* partion(node* head, node* tail, int x)
{
    node *left_head = NULL;
    node *left_tail = NULL;
    node *right_head = NULL;
    node *right_tail = NULL;
    node* n1 = NULL;
    

    while (head != NULL)
    {
        // cout << head-> data;
        if (head -> data < x)
        {
            // insertEnd(left_head, left_tail, head -> data);
            // head = head -> next;
            n1 = head;
            
            head = head -> next;
            n1 -> next = NULL;
            insertEndNode(left_head, left_tail, n1);

            
        }
        else
        {
            n1 = head;
            
            head = head -> next;
            n1 -> next = NULL;
            insertEndNode(right_head, right_tail, n1);
            
        }
    }
    left_tail-> next = right_head;
    return left_head;

}
node* partion(node* head, int x)
{
    node *left_head = NULL;
    node *left_tail = NULL;
    node *right_head = NULL;
    node *right_tail = NULL;

    while (head != NULL)
    {
        node* current = head;
        head = head->next;
        current->next = NULL;

        if (current->data < x)
        {
            if (left_head == NULL)
                left_head = left_tail = current;
            else
            {
                left_tail->next = current;
                left_tail = current;
            }
        }
        else
        {
            if (right_head == NULL)
                right_head = right_tail = current;
            else
            {
                right_tail->next = current;
                right_tail = current;
            }
        }
    }

    if (left_head == NULL)
        return right_head;

    left_tail->next = right_head;
    return left_head;
}

int main()
{
    int n,k;
    cin >> n >> k;
    node* head = NULL;
    node* tail = NULL;

    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        insertEnd(head, tail, x);

    }
    // printLinkedList(head);
    node* new_head = partion(head, k);
    printLinkedList(new_head);
    return 0;
}