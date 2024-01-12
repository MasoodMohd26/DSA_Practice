#include <iostream>
#include <queue>
#include <unordered_map>
#include <climits>
using namespace std;
class node{
public:
    int data;
    node* left,*right;
    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
node* levelBuild()
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
int main()
{
    node* root = levelBuild();
    levelOrder(root);
    unordered_map<int,vector<int>>h;
    getVerticalOrder(root, 0, h);
    for (int i= mini; i<=maxi; i++)
    {
        for(auto it:h[i])
        {
            cout << it << " ";
        }
    }
    return 0;
}