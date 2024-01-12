#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string a[3];
    a[0] = "Masood";
    a[1] = "Ali";
    a[2] = "Khan";
    for (int i=0; i<3; i++)
    {
        cout << a[i] << " ";

    }
    sort(a, a+3);
    cout << endl;
    for (int i=0; i<3; i++)
    {
        cout << a[i] << " ";

    }

    return 0;
}