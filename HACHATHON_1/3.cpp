#include<iostream> 
using namespace std; 

int main(){ 
     string s;
     getline(cin, s);
     char max = s[0];
     int idx;
     for (int i=0; i<s.size(); i++)
     {
         if (s[i] > max)
         {
            max = s[i];
            idx = i;
         }
     }
     swap(s[0], s[idx]);
     cout << s;
}