#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
        //clm = current left max
        //crm = current right max
        int clm = 0;
        int crm = 0;
        int l = 0;
        int r = height.size()-1;
        int ans = 0;
        while (l < r)
        {
            if (height[l]<height[r])
            {
                if (clm > height[l])
                {
                    ans+= (clm-height[l]);
                }
                clm = max(clm, height[l]);
                l++;
            }
            else
            {
                if (crm > height[r])
                {
                    ans += (crm - height[r]);
                }
                crm = max(crm, height[r]);
                r--;

            }
        }
        return ans;

    }
int main()
{
    int height[] = {3,2,1,0,5,6,4,5,3};
    
    vector <int> v = {3,2,1,0,5,6,4,5,3};
    
    return 0;
}