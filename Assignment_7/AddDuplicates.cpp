#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* left;
    node* right;
	node(int d)
	{
		data = d;
		left = right = NULL;
	}
};
node* insert(node* root, int d)
{
	
	if (!root)
	{
		node* n = new node(d);
		return n;
	}
	else if (d <= root->data){
		root -> left = insert (root -> left, d);
		return root;
		
	}
	else {
		root -> right = insert(root -> right, d);
		return root;
	}
}
void printans(node* root) {
    if (!root) {
        return;
    }

    if (root->left) {
        cout << root->left->data;
    } else {
        cout << "END";
    }

    cout << " => " << root->data << " <= ";

    if (root->right) {
        cout << root->right->data;
    } else {
        cout << "END";
    }

    cout << endl;

    printans(root->left);
    printans(root->right);
}
int main() {
	node* root = NULL;
	int n;
	cin >> n;
	int m;
	for (int i=0; i<n; i++)
	{
		cin >> m;
		root = insert(root, m);
        root = insert(root, m);
	}
	// cout << root -> data;
    printans(root);
	return 0;
}