#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
bool search(vector<int>v, int key)
{
    for (auto it:v)
    {
        if (it == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    for (int k=0; k<t; k++){
        int n;
        cin >> n;
        unordered_map<int, int>h;
        
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            h[x] = 1;
        }
        int q;
        cin >> q;
        for(int i=0; i<q; i++)
        {
            int x;
            cin >> x;
            if (h.find(x) != h.end()){
                cout << "Yes" << endl;

            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}