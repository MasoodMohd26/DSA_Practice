#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    list<int>calling_order;
    list<int>executing_order;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        calling_order.push_back(x);
    }
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        executing_order.push_back(x);
    }
    int t=0;
    while (!calling_order.empty())
    {
        // cout << calling_order.front() << " ";
        while (calling_order.front() != executing_order.front()){
            t++;
            int x = calling_order.front();
            calling_order.pop_front();
            calling_order.push_back(x);
        }
        t++;
        executing_order.pop_front();
        calling_order.pop_front();
    }
    cout << t;


    return 0;
}