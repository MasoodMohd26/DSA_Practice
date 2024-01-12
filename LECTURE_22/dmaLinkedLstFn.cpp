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

void insertFront(node * &head, node* tail,    int val)
{
    node * temp = new node(val);
    
    if (head == NULL)
    {
        temp -> next = NULL;
        head = tail = temp;
        return;
    }
    
    temp -> next = head;
    head = temp;
    return ;
}


// void insertEnd(node * tail;)

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
    node* head1 = new node(1);
    node* tail = new node();
    // head -> data = 1;
    // head -> next = NULL
    node * head = new node();

    head = NULL;
    insertFront(head, tail, 2);
    printLinkedList(head);
    insertFront(head,tail, 3);
    printLinkedList(head);
    return 0;
}