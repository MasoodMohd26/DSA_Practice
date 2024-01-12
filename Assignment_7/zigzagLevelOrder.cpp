#include <bits/stdc++.h>
#include <queue>
using namespace std;
vector<vector<int>>v;

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
void preorder(node* root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
void LevelOrder(node* root)
{
    if (!root)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    vector<int>v1;
    

    while(!q.empty())
    {
        node* f = q.front();
        q.pop();
        if (!f)
        {
            v.push_back(v1);
            v1.clear();
            // cout << endl;
            if (!q.empty()) q.push(NULL);
        }
        else
        {
            v1.push_back(f->data);
            // cout << f->data << " ";
            if (f->left) q.push(f->left);
            if (f->right)q.push(f->right);
        }
    }
}


int main()
{
    node* root = build("true");
    // preorder(root);
    LevelOrder(root);
    // cout << endl << endl;
    cout << "[";
    for (int i=0; i<v.size(); i++)
    {
        cout << "[";
        for (int j=0; j<v[i].size(); j++)
        {
            if (j == v[i].size()-1)
            {
                cout << v[i][j];
                continue;
            }
            cout << v[i][j] << ", ";
        }
        if (i == v.size()-1)
                {
                    cout << "]";
                    continue;
                }
        
        cout << "], ";
        
        
        // cout << endl;
    }
    cout << ']';

    return 0;
}
