#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector <int> v)
{
    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    cout << "garbage val wali initialisation";
    PrintVector(v);
    return 0;
}