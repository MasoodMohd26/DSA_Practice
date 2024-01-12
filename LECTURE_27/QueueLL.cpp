#include <iostream>
using namespace std;
template<typename U>
class node{
public:
    U data;
    node<U>* next;
    node(U d)
    {
        data = d;
        next = NULL;
    }


};
template <typename T>
class Queue{
    node<T> *head;
    node<T> *tail;
    int cs;
public:
    Queue()
    {
        head = tail = NULL;
        cs = 0;
    }
    void push(T data)
    {
        cs++;
        node<T>* n = new node<T>(data);
        if (head == NULL)
        {
            n -> next = head;
            head = tail = n;

        }
        else{
            tail->next=n;
            tail = n;
        }
    }
    void pop(){
        if (tail == NULL){
            cout << "Underflow\n";
        }
        else if (head->next != NULL){
            cs--;
            node<T>* temp = head;
            head = head -> next;
            delete temp;
        }
        else{
            cs--;
            delete head;
            head = tail = NULL;
        }
    }
    bool empty(){
        return cs == 0;

    }
    int front()
    {
        return head->data;

    }

};
int main()
{
    Queue<int> q;
    for (int i=0; i<4; i++){
        q.push(i);
    }
    for (int i=0; i<4; i++){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}