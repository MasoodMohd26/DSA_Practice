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
void fn(vector<vector<int>>v1,vector<vector<int>>v )
{
    if (v.size()!=v1.size())
    {
        cout << "false";
        return;
    }
    for (int i=0; i<v.size(); i++)
    {
        if (v[i].size() != v1[i].size())
        {
            cout << "false";
            return;
        }
        for(int j=0; j<v[i].size(); j++)
        {
            if ((v1[i][j] == -1 and v[i][j] != -1) ||(v[i][j] == -1 and v1[i][j] != -1))
            {
                cout << "false";
                return;
            }
            
        }
    }
    cout << "true";
    return;
}


int main()
{
    node* root = build("true");
    node* root2 = build("true");
	
    // preorder(root);
    LevelOrder(root);

    vector<vector<int>>v1 = v;
    v.clear();
    LevelOrder(root2);

    
    fn(v1,v);


    return 0;
}
