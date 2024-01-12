#include <iostream>
#include <utility>
#include <queue>
using namespace std;
class node{
public:
    int data;
    node *left, *right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }

};

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
void levelOrder(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* f = q.front();
        q.pop();
        if (f!=NULL)
        {
            cout << f->data << " ";
            if (f->left  != NULL) q.push(f->left);
            if (f->right != NULL) q.push(f->right);
        }
        else{
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

    }
}
int main()
{
    int pre[] ={1,2,4,3,5,6};
    int in[] = {4,2,1,5,3,6};
    int n = sizeof(pre)/ sizeof(int);
    node* root = preInBuild(pre, in,n,0,0,n-1);
    levelOrder(root);
    return 0;
}