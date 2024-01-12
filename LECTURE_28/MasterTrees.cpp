/*         8
          /  \
        10   3
       / \    \
      1   6    14
         / \   /
        4   7  13 
*/

// input 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
#include <iostream>
#include <utility>
#include <queue>
#include <climits>
#include <unordered_map>
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
node* buildTree()
{
    int n;
    cin >> n;
    if (n == -1){
        return NULL;
    }
    node* root = new node(n);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void preorder(node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    return;

}
void postorder(node *root)
{
    if (!root)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
    
}
int cntNodes(node* root)
{
     return (!root) ? ( 0) : ( cntNodes(root -> left) + cntNodes(root -> right)) + 1;
}
int ht(node* root)
{
     return (!root) ? ( 0) : ( max(ht(root -> left),ht(root -> right))) + 1;
}
int dia(node* root)
{
    if (!root){
        return 0;
    }
    int op1 = ht(root->left)+ht(root->right);
    int op2 = dia(root->left);
    int op3 = dia(root -> right);
    return max(max(op1, op2), op3);

}
pair<int, int> fastDia(node* root)
{
    if (!root)
    {
        return make_pair(0,0);
    }
    pair<int, int> left = fastDia(root -> left);
    pair<int, int> right = fastDia(root -> right);
    pair<int, int> ret;
    ret.first = 1+max(left.first, right.first);
    ret.second = max(max(left.second, right.second), left.first + right.first);
    return ret;
    

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
void mirror(node* root)
{
    if (!root)
    {
        return;
    }
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
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

int mini = INT_MAX;
int maxi = INT_MIN;
void getVerticalOrder(node* root, int h_dis, unordered_map<int, vector<int>>&m)
{
    if (!root)
    {
        return ;
    }
    mini = min(mini, h_dis);
    maxi = max(maxi, h_dis);
    m[h_dis].push_back(root->data);
    getVerticalOrder(root->left, h_dis-1, m);
    getVerticalOrder(root->right, h_dis+1, m);

}
// faulty
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
int maxSum(node* root, int current_max)
{

}

int main()
{
    // node * root = buildTree();
    node * root = levelOrderBuild();
    cout << "INORDER : ";
    inorder(root);
    cout << endl;
    cout << "PREORDER : ";
    preorder(root);
    cout << endl;
    cout << "POSTORDER : ";
    postorder(root);
    cout << endl;

    // cout << "Cnt Nodes : " << cntNodes(root) << endl;
    // cout << "Height of tree : " << ht(root) << endl;
    // cout << "Dia of tree : " << dia(root) << endl;
    // cout << "FastDia of tree : " << fastDia(root).second << endl;
    // cout << "LEVEL ORDER : \n";
    // levelOrder(root) ;
    // cout << endl;
    // mirror(root);
    // levelOrder(root);

    // node* root = levelOrderBuild();
    // levelOrder(root);
    // cout << "PREORDER : ";
    // preorder(root);
    // int pre[100] ={8,10,1};
    // int in[100] = {10,8,17};
    // node* root = preInBuild(in,0,2,pre,0);
    // inorder(root);
    // cout << endl;
    // preorder(root);
    return 0;
}
