#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> h;
    pair<string,int>p = {"Pineapple", 50};
    h.insert(p);
    h.insert({"GUAVA", 150});
    h["mango"] = 100;
    h.insert(make_pair("masood", 2000));
    for (auto it:h)
    {
        cout <<"{" <<it.first << ", " << it.second << "}"<< endl;
    }
    cout << endl;
    int total_cap = h.bucket_count();
    // unordered_map<string,int> :: iterator x;
    for (int i=0; i<h.bucket_count(); i++)
    {
        cout << i << "-->";
        for (auto x = h.begin(i); x!=h.end(i); x++)
        {
            cout << "("<<(*x).first << ", " << (*x).second << ") " ;
        }
        cout << endl;
    }

}