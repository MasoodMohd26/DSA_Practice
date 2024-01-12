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
void update (vector <int> &v)
{
    for (int i=0; i<v.size(); i++)
    {
        v[i] ++;
    }
}
int main()
{
    vector <int> v;
    for (int i=1; i<=5; i++)
    {
        v.push_back(i);
    }
    cout << v.size() << endl;
    cout << v.capacity();
    cout << endl;
    cout << "before updation : ";
    PrintVector(v);
    cout << endl;
    update(v);
    cout << "after updation : ";
    PrintVector(v);

    
    return 0;
}