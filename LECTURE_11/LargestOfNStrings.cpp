#include <iostream>
#include <cstring>
using namespace std;

void stringCopy(char a[], char c[])
{

    // remember to add null char also ie loop <=len tak chalaya hai
    for (int i = 0; i<=strlen(a); i++){
        c[i] = a[i];
    }
}

int main()
{
    char a[1000];

    char largest[100];
    int n;
    cin >> n;
    cin.get();    // beware
    for (int i=0; i<n; i++)
    {
        cin.getline(a,100);
        if (strlen(a) > strlen(largest)){
            stringCopy(a, largest);
        }
    }
    cout << largest;

    
    return 0;

}