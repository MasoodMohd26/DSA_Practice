#include <iostream>
#include <string>
using namespace std;

bool CBcheck(int n) {
    if (n == 1) {
        return false;
    }

    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    for (int i = 0; i < 10; i++) {
        if (n == arr[i]) {
            return true;
        } 
        if (n % arr[i] == 0) {
            return false;
        }
    }
    return true;
}

bool check(string   &s)
{
    if (CBcheck(stoi(s)) == false)
    {
        return false;
    }
    for (int i=0; i<s.size(); i++)
    {
        for (int j=i; j<s.size(); j++)
        {
            string sub = s.substr(i, j - i + 1);
            // cout << sub;
            if (sub == s)
            {
                continue;
            }
            
            int num = stoi(sub);
            // cout << num;
            if (CBcheck(num) == true) 
            {
                return false;
            }
        }
    }
    return true;
}


int Cnt(string &s) {
    int cnt = 0;
    int l = s.size();
    string sub;
    for (int i = 0; i < l; i++) {
        
        for (int j = i; j < l; j++) {
            sub = s.substr(i, j - i + 1);
            // cout << sub << " "<< endl;
            
            if (check(sub) == true) {
                // cout << sub << ' ';
				cnt++;
            }        
        }
    }  
    return cnt;
}

int main() {
    // int n;
    // cin >> n;
    // cin.get();
    string s;
    s="";
    cout << check(s);
    // getline(cin, s);
    // int cnt = Cnt(s);
    // cout << cnt;
    return 0;
}
