#include <iostream>
using namespace std;
bool CheckPermutation(char *a, char *b)
{
    int freq[256]={0};
    
    
    for (int i=0; a[i]!='\0'; i++)
    {
        freq[a[i]]++;
    }

    for (int i=0; b[i]!='\0'; i++)
    {
        freq[b[i]]--;
    }
    for (int i=0; i<256; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char a[1000];
    char b[1000];
    cin.getline(a,1000);
    cin.getline(b,1000);
    cout<<CheckPermutation(a,b)<<endl;
    return 0;

}