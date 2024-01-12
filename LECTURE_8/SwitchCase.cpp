#include <iostream>
using namespace std;
int main(){
    // we can apply it on char and int
    char ch;
    cin >> ch;
    switch(ch){
        case 'N':
            cout << "North"<< endl;
        
        case 'E':
            cout << "East"<< endl;
        
        case 'S':
            cout << "South"<< endl;
        
        case 'W':
            cout << "West"<< endl;
        
        default:
            cout << "kahan jakar manega";
        


    }


    
    return 0;
}