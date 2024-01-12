#include<iostream>
#include <cstring>
using namespace std;

bool cmp(string &s1, string &s2)
{
	int i= 0;
	int j = 0;
    int l1 = s1.size();
    int l2 = s2.size();
    if (l1 == l2)
    {
        return 0;
    }
	while (i<l1 and j<l2 )
	{
		if (s1[i] < s2[j])
        {
            return 0;
        }
        else if (s1[i] > s2[j])
        {
            return 1;
        }
        else {
            ++i;++j;
        }
	}
    if (i < l1)
    {
        if (s1[i] < s2[0])
        {
            return 0;
        }
        return 1;
    }
    else if (j < l2)
    {
        if (s2[j] < s1[0])
        {
            return 0;
        }
        return 1;
    }
}


void bubble_sort(string arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (cmp(arr[j], arr[j+1]))
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

 

int main() {
    string arr[]  = {"i", "ie", "ate", "zet"};
    bubble_sort(arr, 4);
	for (int i=0; i<4; i++)
    {
        cout << arr[i] << " ";
    }
	return 0;
}