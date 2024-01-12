#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

int Sum(node* root)
{
     return (!root) ? ( 0) : ( Sum(root -> left) + Sum(root -> right)) + root->data;
}

void replace(node* root)
{
    if (!root)
    {
        return ;
    }
    replace(root -> left);
    replace(root -> right);
    
    root->data = Sum(root ->right);
    return;

}
node* levelOrderBuild()
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    node* root = new node(x);
    queue<node*>q;
    q.push(root);
    while (!q.empty())
    {
        node* f = q.front();
        q.pop();
        int left, right;
        cin >> left >> right;
        if (left != -1)
        {
            f->left = new node(left);
            q.push(f -> left);
        }
        if (right != -1)
        {
            f->right = new node(right);
            q.push(f -> right);
        }
    }
    return root;
}
node* preInBuild(int* pre, int* in, int n, int idx, int s, int e)
{
    if (idx == n || s > e)
    {
        return NULL;
    }
    int i;
    for ( i=s; i<=e; i++)
    {
        if (pre[idx] == in[i])
        {
            break;
        }
    }
    node* root = new node(pre[idx]);
    root->left = preInBuild(pre, in, n, idx+1, s, i-1);
    root->right = preInBuild(pre, in, n, idx+i-s+1, i+1, e);
    return root;

}
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
void pre(node* root)
{
    if (!root)
    {
        return;
    }
    cout << (root->data) << endl;
    pre(root->left);
    pre(root->right);

}
node* buildTree (int inorder[], int start, int end) 
{ 
    if (start > end) 
        return NULL; 
 
    /* Find index of the maximum element from Binary Tree */
    int i = max (inorder, start, end); 
 
    /* Pick the maximum value and make it root */
    node *root = new node(inorder[i]); 
 
    /* If this is the only element in inorder[start..end], 
    then return it */
    if (start == end) 
        return root; 
 
    /* Using index in Inorder traversal, construct left and 
    right subtress */
    root->left = buildTree (inorder, start, i - 1); 
    root->right = buildTree (inorder, i + 1, end); 
 
    return root; 
} 
 
/* UTILITY FUNCTIONS */
/* Function to find index of the maximum value in arr[start...end] */
int max (int arr[], int strt, int end) 
{ 
    int i, max = arr[strt], maxind = strt; 
    for(i = strt + 1; i <= end; i++) 
    { 
        if(arr[i] > max) 
        { 
            max = arr[i]; 
            maxind = i; 
        } 
    } 
    return maxind; 
}
int main() {
	node* root = NULL;
	int n;
	cin >> n;
	int in[1000];
	for (int i=0; i<n; i++)
	{
		cin >> in[i];
        
	}
    root = buildTree(in, 0, n-1);
	// cout << root -> data;
    replace(root);
    pre(root);
    
	return 0;
}