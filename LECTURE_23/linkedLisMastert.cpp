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



int lengthLL(node * head)
{
    
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head -> next;
    }
    return l;
}

////////////////////  Insertion  //////////////////////////


//-----------------//InsertFront
void insertFront(node * &head, node* &tail,    int val)
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

//-----------------@//InsertFront

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
//-----------------//@InsertEnd


//-----------------//InsertMIddle
void insertMiddle(node* &head, node* &tail, int pos, int val)
{
    if (pos == 0)
    {
        insertFront(head,tail, val);
        return;
    }
    if (pos >= lengthLL(head))
    {
        insertEnd(head, tail, val);
        return;
    }
    node* t = head;
    for (int i=0; i<pos-1; i++)
    {
        t = t->next;
    }
    node* n = new node(val);
    n -> next = t -> next;
    t -> next = n;
}
//-----------------//@InsertMIddle

////////////////////  @Insertion  //////////////////////////



////////////////////  Deletion  //////////////////////////

//-----------------//DeleteFront
void deleteFront(node * &head, node* &tail)
{
    if (head == NULL)
    {
        cout << "List empty\n";

    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else 
    {
        node* t = head ;
        head = head -> next;
        delete t;
        t = NULL;
    } 
}

//-----------------//@DeleteFront

//-----------------//DeleteEnd
void deleteEnd(node* &head, node* &tail)
{
    node* t = head;
    if (head == NULL)
    {
        cout << "List already empty\n";
        return;
    }
    if (head -> next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    while (t -> next != tail)
    {
        t = t -> next;
    }
    delete tail;
    tail = t;
    tail -> next = NULL;
    return;
}
//-----------------//@DeleteEnd

//-----------------//DeleteMid
void deleteMid(node* &head, node* &tail, int pos)
{
    int len = lengthLL(head);
    if (pos == 0)
    {
        deleteFront(head, tail);
        return;
    }
    
    else if (pos >= len || pos <0)
    {
        cout << "Invalid Index\n";
        return;
    }
    else if (pos == len-1)
    {
        // cout << "Deleting last node";
        deleteEnd(head, tail);
        return;
    }
    
    
    
    node *t = head;
    for (int i=0; i<(pos-1); i++)
    {
        t = t->next;
    }
    node *t2 = t->next;
    t->next = t2->next;
    delete t2;
    t2 = NULL;
    return;


}
//-----------------//@DeleteMid

////////////////////  @Deletion  //////////////////////////

////////////////////  Miscellaneous  //////////////////////////

//-----------------//Print A Linked List
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
//-----------------//@Print A Linked List


//-----------------//Destroy A Linked List
void destroyLL(node* &head, node* &tail)
{
    while (lengthLL(head) != 0 )
    {
        deleteFront(head, tail);
    }
    printLinkedList(head);
    cout << "DESTROYED";
}
//-----------------//@Destroy A Linked List



//-----------------//Reverse A Linked List
void reverseLL(node* &head, node* &tail)
{
    node* p = NULL;
    node* c = head;
    node* n ;
    while (c != NULL)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
        
    }
    swap(head, tail);

}
//-----------------//@Reverse A Linked List


//-----------------//Reverse A Linked List Recursion
void reverseLLRecursionHelper(node* c, node* p =NULL)
{
    if (c == NULL)
    {
        return;
    }
    else
    {
        reverseLLRecursionHelper(c->next, c);
        c -> next = p;
    }
}



void reverseLLRecursion(node* &head, node* &tail)
{
    reverseLLRecursionHelper(head);
    swap(head, tail);
}
//-----------------//@Reverse A Linked List Recursion



//-----------------//Find MIddle  
node* findMiddle(node* head)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return NULL;
        
    }
    if (head -> next == NULL)
    {
        return head;
    }
    node* fast = head->next;
    node* slow = head;
    while (1)
    {
        if (fast == NULL || fast->next == NULL)
        {
            return slow;
        }
        else
        {
            fast = fast -> next -> next;
            slow = slow-> next;
        }
    }
}
//-----------------//@Find MIddle  


//-----------------//Merge 2 Sorted LL
node* merge(node* &head1, node* &head2)
{
    if (head1 == NULL and head2 == NULL)
    {
        cout << "Beware you are returning NULL\n";
        return NULL;
    }
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *ret;
    if (head1->data <= head2 -> data)
    {
        ret = head1;
    }
    else{
        ret = head2;
    }
    node* p1 = head1;
    node* p2 = head2;
    node* n;
    while (p1 != NULL && p2 != NULL)
    {
        // cout << "hi";
        if (p1->data <= p2->data)
        {
            n = p1-> next;
            p1 -> next = p2;
            p1 = n;

        }
        else
        {
            n = p2->next;
            p2->next = p1;
            p2 = n;
        }
    }
    return ret;
    
}
//-----------------//@Merge 2 Sorted LL

//-----------------//Merge 2 Sorted LL Recursion
node* mergeRec(node* h1, node* h2)
{
    if (h1 == NULL)
    {
        return h2;
    }
    else if (h2 == NULL)
    {
        return h1;
    }
    if (h1->data <= h2->data)
    {
        h1->next = mergeRec(h1->next, h2);
        return h1;
    }
    else
    {
        h2->next = mergeRec(h1, h2->next);
        return h2;
    }

}
//-----------------//@Merge 2 Sorted LL Recursion

//-----------------//Merge Sort LL
node* MergeSortLL(node* h)
{
    // BASE CASE
    if (h->next  == NULL || h == NULL)
    {
        return h;
    }

    //1. DIVIDE
    node* m = findMiddle(h);
    node* a = h;
    node* b = m->next;

    // break the middle branch of the main linked list
    m->next = NULL;

    //2. SORT
    a  = MergeSortLL(a);
    b = MergeSortLL(b);

    //3. MERGE
    return mergeRec(a,b);



}
//-----------------//@Merge Sort LL

//-----------------//Bubble Sort LL
void BubbleSortLL(node* &head, node* &tail){
    int n = lengthLL(head);
    for (int i=0; i<n-1; i++)
    {
        node*c = head;
        node* p = NULL;
        node* n;
        while(c != NULL and c->next != NULL)
        {
            n = c->next;
            if (c->data > c->next->data)
            {
                //swapping hogi
                n = c->next;
                if (p == NULL)
                {
                    //head change hoga
                    c->next = n->next;
                    n->next = c;
                    p=n;
                    head = n;
                }
                else
                {
                    // head change nhi hoga
                    p->next = n;
                    c->next = n->next;
                    n->next = c;
                    p=n;

                }
            }
            else
            {
                p = c;
                c = n;
            }
            
        }
    }
    node* c = head;
    while (c != NULL and c->next!=NULL)
    {
        c = c->next;
    }
    tail = c;
    return;
}
//-----------------//@Bubble Sort LL

//-----------------//Cycle detection
bool isCycle(node* head)
{
    node* f = head;
    node*s = head;
    while(f!=NULL and f->next!=NULL)
    {
        
        f = f->next->next;
        s = s->next;
        if (f == s)
        {
            return true;
        }

    }
    return false;
}
//-----------------//@Cycle detection


//-----------------//Cycle Break
void breakCycle(node* head)
{
    node* f = head;
    node*s = head;
    int flag = 0;
    while(f!=NULL and f->next!=NULL)
    {
        
        f = f->next->next;
        s = s->next;
        if (f == s)
        {
            flag = 1;
            break;
        }

    }
    if (flag == 0)
    {
        return;
    }

    //setting the previous pointer
    node* p = head;
    while (p -> next != f)
    {
        p = p->next;
    }

    // now moving slow to head
    s = head;
    while (s != f)
    {
        p = f;
        f = f->next;
        s = s-> next;
    }
    p->next = NULL;
    return;


    
}
//-----------------//@Cycle Break



////////////////////  @Miscellaneous  //////////////////////////



int main()
{
    // node* head1 = new node(1);
    // node* tail = head1;
    // // head -> data = 1;
    // // head -> next = NULL
    // node * head = new node();

    // head = NULL;
    // insertFront(head, tail, 2);
    // printLinkedList(head);
    // insertFront(head,tail, 3);
    // printLinkedList(head);
    // insertEnd(head,tail, 4);
    // printLinkedList(head);
    
    // node* head = NULL;
    // node* tail= NULL;
    // deleteMid(head, tail, 0);
    // insertFront(head, tail, 2),
    // cout << tail -> data << endl;
    // printLinkedList(head);
    // insertFront(head, tail, 1),
    // printLinkedList(head);
    // insertEnd(head, tail, 1);
    // printLinkedList(head);
    // insertEnd(head, tail, 2);
    // printLinkedList(head);
    // // cout << lengthLL(head);
    // insertMiddle(head, tail, 0,0);
    // printLinkedList(head);
    // insertMiddle(head, tail, 1,5);
    // printLinkedList(head);
    // deleteEnd(head, tail);
    // insertEnd(head,tail,3);
    // printLinkedList(head);
    // deleteMid(head, tail, 3);
    // deleteMid(head, tail, 0);
    // printLinkedList(head);
    // cout << head->data << " " << tail->data << endl;
    // deleteEnd(head, tail);
    // printLinkedList(head);
    // insertEnd(head,tail,2);
    // insertEnd(head,tail,3);
    // insertEnd(head,tail,4);
    // insertEnd(head,tail,5);
    // deleteFront(head, tail);
    // printLinkedList(head);
    // deleteEnd(head, tail);
    // printLinkedList(head);
    // insertEnd(head,tail,5);
    // printLinkedList(head);
    // deleteMid(head, tail,1);
    // printLinkedList(head);
    // destroyLL(head, tail);
    // cout << head;
    // reverseLL(head, tail);
    // node *p = NULL;
    // reverseLLRecursion(head, tail);
    // swap(head, tail); 
    // printLinkedList(head);
    // node *t = findMiddle(head);
    // if (t != NULL)
    // cout << t->data << endl;
    node* head1 = NULL;
    node* head2 = NULL;
    node* tail1 = NULL;
    node* tail2 = NULL;
    insertEnd(head1, tail1, 5);
    insertEnd(head1, tail1, 7);
    insertEnd(head1, tail1, 3);
    insertEnd(head1, tail1, 1);
    insertEnd(head1, tail1, 6);
    tail1->next = head1 ->next;
    breakCycle(head1);
    
    


    // insertEnd(head2, tail2, 2);
    // insertEnd(head2, tail2, 4);
    // insertEnd(head2, tail2, 6);
    
    // cout << head1 -> data << head2 -> data;
    printLinkedList(head1);
    // BubbleSortLL(head1, tail1);
    // printLinkedList(head1);
    // insertEnd(head1, tail1, 10);
    // printLinkedList(head1);
    // cout << (head1);
    
    
    return 0;
}