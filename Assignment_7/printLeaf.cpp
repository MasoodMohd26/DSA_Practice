#include<bits/stdc++.h>

using namespace std;
class node{
public :
	int data;
	node* left, *right;
	node(int d)
	{
		data = d;
		left = right = NULL;
	}

};
node* levelBuild()
{

	int x,l,r;
	cin >> x;
	if (x == -1 ) return NULL;
	queue<node*>q;
	node* root = new node(x);
	q.push(root);
	while(!q.empty())
	{
		node* elt = q.front();
		q.pop();
		if (elt->data != -1)
		{
			cin >> l;
            cin >> r;
            if (l != -1)
            {
                node* left = new node(l);
                elt->left = left;
                q.push(left);
            }
            if (r != -1)
            {
                node* right = new node(r);
                elt->right = right;
                q.push(right);
            }
            
		}
	}
    return root;

}
void preorder(node* root)
{
    if (!root)
    {
        return;
    }
    if (!root -> left and !root->right) cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

int main() {
    node * root = levelBuild();
    preorder(root);
	return 0;
}