// https://hack.codingblocks.com/app/contests/4703/1075/problem
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    // outer loop for test cases
    for (int x=0; x<t; x++)
    {
        int n;
        cin >> n;
        int arr[n];
        // taking input
        for (int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int i=n-2;
        int flag = 0;
        // second lst elt se ulta loop
        for (i=n-2; i>=0; i--)
        {
            // checking from the last the ith is greater and next is smaller 
            // coz wo aur uske baad wale elements hi shuffle honge baaki sab apni position par barkarar rahenge
            if (arr[i] <arr[i+1])
            {
                // setting flag to identify ki saare elt decreasing order main nhi hai 
                // like 321 ka next permutation 123specially handle kiya jayega

                flag = 1;
                

                // algo is i ke baad wale elts ka next largest elt dundho usko i se swap karo and then i+1 se last elt tak ascending order main arrange kardo
                int elt = arr[i];
                int min = i+1;
                // to find next largest elt idx of i
                for (int j=i+2; j<n; j++)
                {
                    if (arr[j] > elt and arr[j] <arr[min])
                    {
                        // swap(arr[i], arr[j]);
                        // break;
                        min = j;
                    }

                    
                }
                swap(arr[i], arr[min]);
                // cout << "38" << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
                sort(arr+i+1, arr+n);
                // cout << "40" << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
                break;
            }
        }
        
        
        if (flag != 1)
        {
            sort(arr, arr+n);

        }
        for (int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl; 
    }
    return 0;

}