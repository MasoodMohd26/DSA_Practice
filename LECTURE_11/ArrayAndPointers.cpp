#include <iostream>
using namespace std;
int main()
{

    int a[] = {1,2,3,4};
    int *p = a;
    cout << "Array notatio p[i] -> " << " ";
    for (int i=0; i<4; i++)
    {
        cout << p[i]<< " ";
    }
    cout << endl;
    cout << "Array notatio *(p + i) -> " << " ";
    for (int i=0; i<4; i++)
    {
        cout << *(p+i)<< " ";
    }
    return 0;

}