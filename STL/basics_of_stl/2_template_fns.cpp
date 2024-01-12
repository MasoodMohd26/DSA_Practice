#include<iostream>
using namespace std;



// template <typename>
template <typename T>
// template <typename T, int limit>    for error handling
T arrMax(T arr[], int n){
     T res = arr[0];
     for (int i = 0; i< n; i++){
        if (arr[i]>res){
            res = arr[i];
        }
     }
     return res;
}



int main(){
    int arrInt[] = {1, 2, 3, 4, 5};     // 5
    cout << arrMax<int>(arrInt,5) << endl;

    float arrFloat[] = {1.1, 2.5, 3.9, 4.7, 5.3};
    cout << arrMax<float>(arrFloat,5) << endl;      // 5.3
    


    return 0;

}



