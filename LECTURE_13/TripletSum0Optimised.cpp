#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& v) {
        int n = v.size();
        int j;
        int k;
        sort(v.begin(), v.end());
        vector <vector <int>> final_ans;
        vector <int> sub(3);
        for (int i=0; i<n-2; i++)
        {
            if (i>0 and v[i] == v[i-1])
            {
                continue;
            }
            
            j = i+1;
            k = n-1;
            while (j < k)
            {
                if (v[i] + v[j] + v[k] > 0)
                {
                    // cout << "1";
                    k--;
                }
                else if (v[i] + v[j] + v[k] < 0)
                {
                    // cout << "2";
                    j++;
                }

                else 
                {
                    // cout << "3";
                    sub[0] = v[i];
                    sub[1] = v[j];
                    sub[2] = v[k];
                    j++;
                    k--;
                    final_ans.push_back(sub);
                    while (j<k and v[j] == v[j-1])
                    {
                        // cout << "ji";
                        j++;
                    }
                    while (j<k and v[k] == v[k+1])
                    {
                        // cout << "hi";
                        k--;
                    }
                }
                
            }

        }
        return final_ans;
    }

int main()
{
    vector<int> arr;
    arr.push_back(-1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(-1);
    arr.push_back(2);
    arr.push_back(-4);
    vector <vector <int>> ans ;
    ans = threeSum(arr);
    for (int i=0; i<ans.size(); i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}