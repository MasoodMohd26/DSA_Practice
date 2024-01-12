# include <iostream>
using namespace std ;
int main(){
    // cout << "ENTER THE NUMBER TO BE CHECKED : ";
    int num;
    cin >> num;
    if (num == 0 || num == 1){
        cout << "neither prime nor composite"<< endl;
        return 0;
    }
    int i = 2;
    while (i <= (num-1)){
        if (num % i == 0){
            cout << "not prime";
            return 0;
        }
         i++;
    }
    cout << "prime";
    return 0;
}