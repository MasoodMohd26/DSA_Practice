# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < int > v{1,2,3,4,5,6}; // size is 6
    v.resize(8);
    for (auto it: v){       //v{1,2,3,4,5,6,0,0}
        cout << it<< " ";
    }
    cout << endl;
    v.resize(10,100);
    for (auto it: v){       //v{1,2,3,4,5,6,0,0,100, 100 }
        cout << it<< " ";
    }
    cout << endl;
    v.resize(2);
    for (auto it : v){      // v{1,2}
        cout << it << " ";
    }

    return 0;
}