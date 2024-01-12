#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>q;
    for (int i=0; i<4; i++)
    {
        q.push(i+1);
    }
    for (int i=0; i<4; i++){
        cout << q.front() << endl;
        q.pop();
    }
}

