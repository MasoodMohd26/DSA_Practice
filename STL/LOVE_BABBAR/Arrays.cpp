#include <iostream>
//library to be included 
#include <array>
using namespace std;
int main(){
    
    array<int, 4> a = {0,1,2,3};
    int size = a.size();     
    cout <<"SIZE : " <<size << endl;    //size = 4
    
    //looping format
    for (int i=0; i<size; i++){
        cout << a[i]<< " ";         //0 1 2 3
    }
    cout << endl;

    //at function
    for (int i = 0 ; i < size; i ++){
        cout << a.at(i) << " ";
    }
    cout << endl;

    cout << "EMPTY :  "<< a.empty();  //0

    cout << endl;


    cout <<"first elemnt : " << a.front() << endl;
    cout << "last elemnt : " << a.back() << endl;




    cout << endl;






    return 0;
}