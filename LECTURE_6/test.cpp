#include <iostream>
using namespace std;
int peakElement(int arr[], int n)
{
   //check if first elt is peak
   if (n == 1){
       return 0;
   }
   
   if (n >= 2 && arr[0] >=arr[1]){
       return 0;
   }
   
   if (n >= 2 && arr[n-1] >= arr[n-2]){
       return n-1;
   }
   int start = 1;
   int end = n-2;
   int mid;
   while (start <= end){
       
       mid = (start + end) / 2;
       // dont worry !! this line will always be executed;
       // coz leftmost in -infinity and rightmost is +infinity;
       if (arr[mid] >= arr [mid-1] && arr[mid] >= arr[mid+1] ){
           return mid;
       }
    //    peak predicted on the right of mid
       else if (arr[mid] >= arr[ mid -1] ){
           start = mid + 1;
       }
    //    peak predicted on the left of mid
       else if (arr[mid] <=  arr[ mid -1] ){
           end = mid - 1;
       }
   }
   
}
int main() {
    int arr[] = {1 ,18, 1, 18, 4, 13, 2, 5, 14, 2, 14, 15, 11, 2, 3, 17, 6};
    int n = 17;
    cout<< peakElement(arr,n);
}
