#include <iostream>
using namespace std;
int main() {
    int row;
    cout << "Enter number of rows needed (ODD NUMBER OF ROWS): ";
    cin >> row;
    if (! (row % 2)){
        cout << "Kindly Enter an ODD number\n";
        return 0;

    }
    int spaceMain = 1, starMain = row - 1;
    //upper half
    for (int r = row; r > row/2 + 1  ; r--){
        //1st row
        if (r == row)
        {
          for (int c = 1; c <= r; c++){
                cout << "*  ";
            }  
        }
        else
        {
            //2nd row onwards upper half before middle row
            //left half stars
            for(int c = 1; c <= starMain/2; c++)
            {
                cout << "*  ";
            }
            //spaces
            for (int space = 1; space <= spaceMain; space++)
            {
                cout << "   ";
            }
            //inc spaceMain by 2
            spaceMain += 2;
            //right half starts
            for(int c = 1; c <= starMain/2; c++)
            {
                cout << "*  ";
            }
            starMain -= 2;
        }
        cout << endl;
        
    }
    //printing middle row
    cout << "*  ";
    for (int space = 1; space <= spaceMain; space++)
    {
        cout << "   ";
    }
    cout << "*  " << endl;
    //---------------------------
    //re init spaceMain and startmain
    spaceMain -= 2;
    starMain += 2;
    //lower half
    for (int r = 1; r <= row / 2; r++)
    {
        //last row logic
        if (r == row/2){
            for (int c = 1; c <= row; c++){
                cout << "*  ";
            }
        }
        else{
            for(int c = 1; c <= starMain/2; c++)
            {
                cout << "*  ";
            }
            //spaces
            for (int space = 1; space <= spaceMain; space++)
            {
                cout << "   ";
            }
            //inc spaceMain by 2
            spaceMain -= 2;
            //right half starts
            for(int c = 1; c <= starMain/2; c++)
            {
                cout << "*  ";
            }
            starMain += 2;
        }
        cout << endl;
    }
    
}
