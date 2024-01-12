#include <iostream>
#include <queue>
using namespace std;
vector<int> v;
void intersection(priority_queue<int>h1, priority_queue<int>h2){
    if (h1.empty() or h2.empty()){
        return;
    }
    while (h1.top() > h2.top())
    {
        h1.pop();
    }
    if (h1.top() == h2.top())
    {
        v.push_back(h1.top());
        h1.pop();
        h2.pop();
        

    }
    if (h1.top() >= h2.top())
    {
        intersection(h1, h2);

    }
    else{
        intersection(h2, h1);
    }
    
}
int main()
{
    priority_queue<int> h1;
    priority_queue<int> h2;
    int n;
    cin >> n;
    int x;
    for (int i=0; i<n; i++)
    {
        
        cin >> x;
        h1.push(x);
    }
    for (int i=0; i<n; i++)
    {
        
        cin >> x;
        h2.push(x);
    }
    intersection(h1, h2);
    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
    
    
}