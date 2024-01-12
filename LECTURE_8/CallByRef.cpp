#include <iostream>
using namespace std;

void update(int &x){
    x++;
}

int main()
{
    int a = 1;
    update(a);
    cout << "After calling the function: "<< a<< endl;
}