#include <iostream>
using namespace std;
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int arr1[], int arr2[], int l1, int l2)
    {
        int i=0;
        int j = 0;
        int sum = 0;
        int sum1 = 0;
        int sum2 = 0;
        while (i<l1 and j<l2)
        {
            if (arr1[i] == arr2[j])
            {
                sum += max(sum1, sum2);
                sum1 = 0;
                sum2 = 0;
            }
            sum1 +=arr1[i];
            i++;
            while ((arr2[j] < arr1[i]) and (i<l1 and j<l2))
            {
                sum2 += arr2[j];
                j++;
                
            }
        }
        while (i<l1)
        {
            sum1 += arr1[i];
            i++;
        }
        while (j<l2)
        {
            sum2 += arr2[j];
            j++;
        }
        sum += max(sum1, sum2);
        return sum;
    
        //Your code here
    }
};