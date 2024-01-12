#include<bits/stdc++.h>
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
void merge(node * head1, node* head2)
{
    node* ret;
    node*h1 = head1;
		node*h2 =head2;
		if (h1->data > h2->data)
		{
			head = h2;
		}
		else{
			head = h1;
		}
		while (h1 != NULL and h2 != NULL)
		{
			if (h1->data < h2->data)
			{
				n = h1;
				h1 = h1->next;
				n -> next = h2;
			}
			else
			{
				n = h2;
				h2 = h2->next;
				n -> next = h1;
			}
		}
        
		while (head != NULL)
		{
			cout << head -> data << " ";
			head = head ->next;
		}
		cout << endl;
        
}
int main() {
	
	int t,n1,n2,x1;
	cin >> t;
	for (int i=0; i<t; i++)
	{
        node* head1 = NULL;
	    node* tail1 = NULL;
	    node* head2 = NULL;
	    node* tail2 = NULL;
	    node* head = NULL;
	    node* n = NULL;
		cin >> n1;
		for (int j=0; j<n1; j++)
		{
			cin >> x1;
			insertEnd(head1, tail1, x1);

		}
		cin >> n2;
		for (int j=0; j<n2; j++)
		{
			cin >> x1;
			insertEnd(head2, tail2, x1);

		}
        merge(head1, head2);

		

	}
	return 0;
}