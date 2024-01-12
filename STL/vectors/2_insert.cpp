#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int>v{1,2,3};
    v.push_back(4);  // check push back
    for (auto it:v){
        cout << it << " ";
        
    }
    cout << endl;

    v.pop_back();   // check pop back
    for (auto it : v){
        cout << it << " ";
    }
    cout << endl;   // if we miss second parameter then it is by default
    v.insert(v.begin()+1, 2,5);   // insert 5 at 1st position 2 times 
    for (auto it: v){
        cout << it << " ";
    }
    vector < int > v2;
    v2.push_back(10);
    v2.push_back(11);
    v2.push_back(12);
    v.insert(v.begin() + 1, v2.begin(), v2.begin() + 3);     // inserting 3 elements (0,1,2) from v2 at 1st position of v

    cout << endl;
    for (auto it : v){
        cout<<it<<" ";
    }
    
   
    return 0;

}