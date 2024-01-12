#include <iostream>
using namespace std;
void num(int n)
{
    switch (n)
        {
            case 0:
                cout << "zero";
                return;
            case 1:
                cout<<"one" << " ";
                return;
            case 2:
                cout<<"two" << " ";
                return;
            case 3:
                cout<<"three" << " ";
                return;
            case 4:
                cout<<"four" << " ";
                return;
            case 5:
                cout<<"five" << ' ';
                return;
            case 6:
                cout<<"six" << ' ';
                return;
            case 7:
                cout<<"seven" << " ";
                return;
            case 8:
                cout<<"eight" << " ";
                return;
            case 9:
                cout<<"nine" << ' ';
                return;
              
            
        }
}
void fn(int n)
{
    if (n>=0 and n <=9)
    {
        num(n);
        return;
    }
    
    fn(n/10);
    num(n%10) ;     // 
    return;
}
int main()
{
    fn(123);
    return 0;
}