#include <iostream>
using namespace std;
int main(){
    int a[] = {5,4,3,2,1};
    int n = sizeof(a) / sizeof (int);
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = 0; j <= n-2; j++)
        {
            if (a[j] > a[j+1]) {
                //swap tech 1
                // int temp;
                // temp = a[j+1];
                // a[j+1] = a[j];
                // a[j] = temp;

                //swap tech 2
                // a[j] = a[j] + a[j+1];
                // a[j+1]= a[j] - a[j+1] ;
                // a[j] = a[j] - a[j+1];

                //inbuilt
                swap(a[j], a[j+1]);
            }
        
        }

        
    }
    for (int i = 0; i <=n-1; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}