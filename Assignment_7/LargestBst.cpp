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

int cntNodes(node* root)
{
     return (!root) ? ( 0) : ( cntNodes(root -> left) + cntNodes(root -> right)) + 1;
}
bool isBst1(node* root, int l = INT_MIN, int r = INT_MAX){
    if (!root)
    {
        return true;
    }
    if ((root->data > l) and (root->data < r))
    {
        return isBst1(root->left, l, root->data) and isBst1(root->right, root->data, r);
    }
    return false;
}
int maxi = INT_MIN;
void largestBst(node* root)
{
    if (!root)
    {
        return;
    }
    if (isBst1(root))
    {
        maxi = max(cntNodes(root), maxi);
    }
    largestBst(root->left);
    largestBst(root->right);
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
int main(){
    int n;
    cin >> n;
    int pre[1000];
    int in[1000];
    for (int i=0; i<n; i++)
    {
        cin >> pre[i];
    }
    for (int i=0; i<n; i++)
    {
        cin >> in[i];
    }
    node* root = preInBuild(pre, in, n, 0, 0, n-1);
    // node* root = levelOrderBuild();
    largestBst(root);
    cout << maxi;
    return 0;
}