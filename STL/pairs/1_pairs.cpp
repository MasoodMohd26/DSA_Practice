#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair <int , int >p1(1,2);
    pair <int , int >p2;
    p2 = {1,4};
    cout << "Pair 1 : " << p1.first << " " << p1.second << endl ;
    cout << "Pair 2 : " << p2.first << " " << p2.second << endl ;
    cout << " == " <<(p1 == p2) << endl;
    cout << " != " <<(p1 != p2) << endl;
    cout << " > " <<(p1 > p2) << endl;
    cout << " < " <<(p1 < p2) << endl;
    cout << " >= " <<(p1 >= p2) << endl;
    cout << " <= " <<(p1 <= p2) << endl;
    // cout << p.first<< " "<< p.second<< endl;
    return 0;
}