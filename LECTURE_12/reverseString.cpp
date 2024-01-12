#include <iostream>
#include <cstring>
using namespace std;
void reverseString(char *a)
{
    int i=0;
    int j = strlen(a)-1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}
int main()
{
    char a[1000];
    cin.getline(a, 1000);
    cout << "Original String: ";
    cout << a << endl;
    reverseString(a); //function call to reverse the string in place
    cout << "Reversed String: ";
    cout << a;
}