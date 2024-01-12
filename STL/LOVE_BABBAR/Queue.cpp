#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Mohd");
    q.push ("Masood");
    q.push("Khan");
    // cout << q.pop() << ' ' << q.pop() << ' ' << q.pop() << " " << endl;
    cout << "first element before pop ->"  << q.front() << endl;
    q.pop();
    cout << "first element after pop ->"  << q.front() << endl;

    //size



    
    return 0;
}