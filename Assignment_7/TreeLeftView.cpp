#include <bits/stdc++.h>
#include <queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        data = d;
        right = left = NULL;
    }

};
node* levelOrderBuild()
{
    node* root  = NULL;
    int x;
    cin >>x;
    if (x == -1)
    {
        return root;
    }
    queue<node*>q;
    root = new node(x);
    q.push(root);
    while (!q.empty())
    {
        node * currNode = q.front();
        q.pop();
        if (!currNode) continue;
        int l, r;
        cin >> l >> r;
        if (l == -1){
            q.push(NULL);
        }
        else{
            node* left = new node(l);
            currNode->left=left;
            q.push(left);
        }
        if (r == -1){
            q.push(NULL);
        }
        else{
            node* right = new node(r);
            currNode->right=right;
            q.push(right);
        }
    }
    return root;

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
void ans(node* root)
{
    if (!root)
    {
        return ;
    }
    cout << root->data << " ";
    ans(root -> left);

}
int main()
{
    node * root = levelOrderBuild();
    LevelOrder(root);
    // ans (root);
	for (int i=0; i<v.size(); i++)
	{
		for(int j=0; j<v[i].size(); j++)
		{
			if (v[i][j] == -1)
			{
				continue;
			}
			cout << v[i][j] << ' ';
			break;
		}
	}
    
    return 0;
}