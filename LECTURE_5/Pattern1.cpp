/*
n = 5

* ***** ***** *
** **** **** **
*** *** *** ***
**** ** ** ****
***** * * *****


*/


#include <iostream>
using namespace std;
int main (){
    int n ;
    cin >> n;
    for (int row = 1; row <= n; row ++)
    {   //print row times star
        for (int j = 1; j <= row; j++ )
        {
            cout << "*";

        }

        //print space
        cout << " ";


        //print n - row + 1 times star
        for (int j = 1; j <= n - row + 1; j++ )
        {
            cout << "*" ;

        }

        //print space
        cout << " ";


        //print n - row + 1 times star
        for (int j = 1; j <= n - row + 1; j++ )
        {
            cout << "*";

        }
        
        //print space
        cout << " ";

        //print row times star
        for (int j = 1; j <= row; j++ )
        {
            cout << "*";

        }
        cout << endl;
    }
    


    return 0;
}