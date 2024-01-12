/*         8
          /  \
         3   10
       / \    \
      1   6    14
         / \   /
        4   7  13 
*/

// input 8 3 10 1 6 14 4 7 13 -1
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
node* insertInBST(node* root, int d){
    
    if (!root){
        node* root = new node(d);
        return root;
    }
    else if (d < root->data){
            root->left = insertInBST(root->left, d);
            return root;

    }
    else{
        root -> right = insertInBST(root -> right, d);
        return root;
    }
    
}
node* createBST()
{
    node* root = NULL;
    int data;
    cin >> data;
    while(data != -1)
    {
        root = insertInBST(root, data);
        cin >> data;
    }
    return root;
}
int ht(node* root)
{
     return (!root) ? ( 0) : ( max(ht(root -> left),ht(root -> right))) + 1;
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
void printRange(node *root, int k1, int k2)
{
    if (!root)
    {
        return;
    }
    printRange(root->left, k1, k2);
    if ((root->data <= k2) and (root ->data >= k1)) cout << root->data << " ";
    printRange(root->right, k1, k2);
    return;

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
bool isBalanced(node* root)
{
    if (!root)
    {
        return true;
    }
    bool b1 = isBalanced(root->left);
    bool b2 = isBalanced(root->right);
    bool b3 = abs(ht(root->left) - ht(root->right)) <= 1;
    return (b1 and b2)and b3;
}
pair<int, bool> fastIsBalanced(node* root){
    if (!root){
        return make_pair(0, true);
    }
    pair <int, bool> left = fastIsBalanced(root -> left);
    pair <int, bool> right= fastIsBalanced(root->right);
    pair<int, bool> ret;
    
    int height = max(left.first , right.first)+1;
    if (left.first = false) return make_pair(height, false);
    if (right.first == false)return make_pair(height, false);
    if (abs(left.first-right.first)>1) return make_pair(height,false);
    return make_pair(height, true);

}
node* createBalancedTreeUsingSorted(int v[], int s, int e)
{
    if (s >e)
    {
        return NULL;
    }
    int mid = (s+e)/2;
    node *n = new node(v[mid]);
    n -> left = createBalancedTreeUsingSorted(v,s,mid-1);
    n -> right = createBalancedTreeUsingSorted(v,mid+1,e);
    return n;

}
node* BSTToSortedLL(node* root)
{
    if(!root)
    {
        return NULL;
    }
    
    node* left_head  =BSTToSortedLL(root -> left);
    node* right_head =BSTToSortedLL(root -> right);
    cout << root->data << " ";
    // if (left_head)
    // {
    //     cout << " " << left_head ->data;;
    // }
    // if (right_head)
    // {
    //     cout << " " << right_head->data;
    // }
    // cout << endl;
    
    node* ret = NULL;
    // if both not NULL
    if(left_head!=NULL && right_head!=NULL )
    {
        ret = left_head;
        //left tail right = root;
        while(left_head -> right != NULL)
        {
            left_head = left_head->right;
        }
        left_head ->right = root;

        root->right = right_head;
        return ret;
    }
    else if (right_head != NULL)
    {
        ret = root;
        root->right = right_head;
        return ret;
    }
    else if (left_head != NULL)
    {
        ret = left_head;
        //left tail right = root;
        while(left_head -> right != NULL)
        {
            left_head = left_head->right;
        }
        left_head ->right = root;
        return ret;
    }
    else
    {
        return root;
    }


}

int main(){
    node* root = createBST();
    inorder(root);
    cout<<endl;
    cout << endl;
    levelOrder(root);
    cout << endl << endl;
    printRange(root, 7, 13);
    cout << endl;
    cout << "IS balanced : " << isBalanced(root);
    cout << endl;
    cout << "IS balanced : " <<fastIsBalanced(root).second;

    cout << endl;

    int arr[] = {1,3,4,6,7, 8, 10, 13, 14};
    int n = sizeof(arr)/ sizeof(int);
    node *root1 = createBalancedTreeUsingSorted(arr, 0, n-1);
    inorder(root1);
    cout << endl;
    node* head = BSTToSortedLL(root);
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head -> right;
    }
    return 0;
}