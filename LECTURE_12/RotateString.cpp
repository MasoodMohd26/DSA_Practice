#include <iostream>
#include <cstring>
using namespace std;
void RotateString(char *a, int k)
{
    int len = strlen(a);
    k = k % len;
    for (int i=len-1; i>=0; i--)
    {
        a[i + k] = a[i];
    }
    int i=0;
    int j=len;
    while (i<k)
    {
        a[i++] = a[j++];

    }
    a[len] = '\0';
    

}
int main()
{
    char a[1000];
    cin.getline(a,1000);
    int n;
    cin >> n;
    cout << "Before rotation : " << a << endl;
    RotateString(a,n);
    cout << "After Rotation : " << a;
    return 0;
}