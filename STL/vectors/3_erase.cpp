# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <int> v{1,2,3,4,5};
    for (auto it : v){      //v{1,2,3,4,5}
        cout << it<< " ";
    }
    cout << endl;
    v.erase(v.begin());
    for (auto it : v){      //v{2,3,4,5}
        cout << it<< " ";
    }
    cout << endl;

    v.erase(v.begin(), v.begin() + 2);
    for (auto it: v){       //v{4,5}
        cout << it << " ";
    }
    cout << endl;
    return 0;
}