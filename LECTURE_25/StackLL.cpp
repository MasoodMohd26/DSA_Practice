#include <iostream>
#include <vector>
using namespace std;

class node {
public: 
    int data;
    node * next;

    node(int d)
    {
        data = d;
        next = NULL;
    }

};

class Stack{
    // public se upar jo bhi likhenge wo private ho jata
    node* head;
public:
    Stack()
    {
        head = NULL;
    }
    void push(int d)
    {
        node *n = new node(d);
        n -> next = head;
        head = n;
        return;
   

    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "empty stack!!";
            return;
        }
        node *n = head;
        head = head->next;
        delete n;
        return;
    }
    bool empty()
    {
        return (head == NULL);
        
    }
    int top()
    {
        if (empty() == 1)
        {
            cout <<"EMPTY STACK :";
            return -1;
        }
        return head->data;
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