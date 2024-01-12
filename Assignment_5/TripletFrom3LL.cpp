#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    list<int>l1;
    list<int>l2;
    list<int>l3;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        l1.push_back(x);
    }
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        l2.push_back(x);
    }
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        l3.push_back(x);
    }
    list<int>::iterator a = l1.begin();
    list<int>::iterator b = l2.begin();
    list<int>::iterator c = l3.begin();
    int target;
    cin >> target;
    // while (a != l1.end())
    // {
    //     while(b != l2.end())
    //     {
    //         while(c != l3.end())
    //         {
    //             int sum = *a + *b + *c;
    //             if (sum == target){
    //                 cout << *a << " "<< *b << " " << *c << " ";
    //                 return 0;
    //             }
    //             c++;
    //         }
    //         b++;
    //     }
    //     a++;
    // }
    for (auto a:l1)
    {
        for (auto b:l2)
        {
            for (auto c: l3)
            {
                if (a+b+c == target)
                {
                    cout << a << " " << b << " " << c << " ";
                    return 0;
                }
            }
        }
    }


    return 0;
    
}
