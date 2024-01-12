#include <iostream>
#include <queue>
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
bool isLeaf(node* root)
{
    if (!root)
    {
        return false;
    }
    if (!root->left && !root->right)
    {
        return true;
    }
    return false;
}
void removeLeaves(node* root )
{
    if (!root)
    {
        return;
    }
    if (isLeaf(root->left) and isLeaf(root->right))
    {
        node* l = root->left;
        node* r = root -> right;
        delete r;
        delete l;
        root->left = NULL;
        root->right = NULL;
    }
    else if (isLeaf(root->left) )
    {
        node* l = root->left;
        
        
        delete l;
        root->left = NULL;
        removeLeaves(root->right);

    }
    else if (isLeaf(root->right) )
    {
        node* r = root->right;
        
        
        delete r;
        root->right = NULL;
        removeLeaves(root->left);
        
    }
    else{
        removeLeaves(root->right);
        removeLeaves(root->left);
    
    }
}
vector<vector<int>>v;
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
			if (f->data == -1)
			{
				continue;
			}
            // cout << f->data << " ";
            if (f->left) q.push(f->left);
			else q.push(new node(-1));

            if (f->right)q.push(f->right);
			else q.push(new node(-1));

        }
    }
}
void print(node *root)
{
    v.clear();
    LevelOrder(root);
    
    for (auto it:v)
    {
        for (auto j:it)
        {
            cout << j << " ";
        }
        cout << endl;
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

int main()
{
    node* root = build("true");
    // print(root);
    removeLeaves(root);
    printans(root);

    // preorder(root);
    return 0;
}
