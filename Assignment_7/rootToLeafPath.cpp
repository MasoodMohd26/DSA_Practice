#include <iostream>
#include <vector>
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
void rootToLeaf(node* root, vector<int>v, int sum)
{
    if (root == NULL)
    {
        
        if (sum == 0 and v.size() != 0)
        {
            for (int i=0; i<v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    if (root->data <= sum)
    {
        v.push_back(root ->data);
        rootToLeaf(root->right, v ,sum - root->data);
        rootToLeaf(root->left, v, sum - root->data);
    }
    else return;
}
int main()
{
    node* root = build("true");
    vector <int>v;
    int sum ;
    cin >> sum;
    rootToLeaf(root,v, sum);
    return 0;
}
