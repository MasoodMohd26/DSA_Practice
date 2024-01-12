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
int main()
{
	int n1;
	int n2;
	node* h1;
	node* t1;
	node* h2;
	node* t2;
	node* h;
	node* t;

	
	h1 = h2 =t1 =t2 = h = t = NULL;
	cin >> n1 >> n2;
	for (int i=0; i<n1; i++)
	{
		int x;
		cin >> x;
		insertFront(h1,t1,x);
	}
	for (int i=0; i<n2; i++)
	{
		int x;
		cin >> x;
		insertFront(h2,t2,x);
	}
	int carry =0;
	int sum;
	while (h1 != NULL and h2 != NULL)
	{
		sum = h1->data + h2->data+carry;
		if (sum>= 10)
		{
			carry = 1;
		}
		else{
			carry = 0;
		}
		insertFront(h,t, sum%10);
		h1 = h1 -> next;
		h2 = h2 -> next;

	}
	if (h1 == NULL and h2 == NULL)
	{
		if (carry == 1) insertFront(h,t,1);
		printLinkedList(h);
		return 0;
	}
	else if (h1 == NULL)
	{
		while (h2 != NULL)
		{
			int sum = h2 -> data + carry;
			if (sum >= 10)
			{
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			insertFront(h,t,sum%10);
			h2 = h2 -> next;

		}
	}
	else if (h2 == NULL)
	{
		while (h1 != NULL)
		{
			int sum = h1 -> data + carry;
			if (sum >= 10)
			{
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			insertFront(h,t,sum%10);
			h1 = h1 -> next;

		}
	}
	if (carry == 1)
	{
		insertFront(h,t,1);
	}
	printLinkedList(h);
	return 0;
	
}