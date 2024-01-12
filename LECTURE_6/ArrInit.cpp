#include <iostream>
using namespace std;
int main(){
    //initialisation
    int arr[10] = {1,2,3,4,5};
    //elements not mentioned will be 0
    for (int i = 0; i < 10; i ++){
        cout << arr[i] << " " ;
    }
    
    return 0;
}