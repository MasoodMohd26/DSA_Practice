#include <iostream>
# include <climits>
using namespace std;
int main(){
    int n;
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    int i = 1;
    int num;
    cin >> n;
    while (i <= n){
        cin >> num;
        sum = sum + num;
        if (num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }
        i++;
    }

    cout << "Maximum " << max << endl;
    cout << "Minimum " << min << endl;
    float mean = sum / (n + 0.0);
    cout << "MEAN " << mean;

    
    return 0;
}