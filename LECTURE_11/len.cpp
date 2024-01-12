#include <iostream>
using namespace std;

int len(char arr[])
{
    int i= 1;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{

char a[1000];
cin.getline(a,1000, '$');
cout << len(a);
    
    return 0;

}