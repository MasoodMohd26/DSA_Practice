#include <iostream>
using namespace std;
int main(){
    int arr[] = {8,4,2,1,5};
    int n = sizeof(arr) / sizeof(int);
    for ( int j = 1; j <=n - 1; j ++)
    {

        int handPickedCard = arr[j];
        int pos = j-1;
        while (pos >=0 )
        {
            if (handPickedCard < arr [pos])
            {
                arr[pos + 1] = arr[pos];
            }
            else
            {
                break;
            }
            pos --;
        }
        arr[pos + 1] = handPickedCard;
        
    
    }
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
    return 0;


}