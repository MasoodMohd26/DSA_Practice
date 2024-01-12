#include <iostream>
#include <string.h>
using namespace std;
string maze[50];
int visited[50][50];
int flag = false;
bool solve(int i, int j, int l, int b)
{
    if (i == l-1 and j == b-1){
        flag = true;
        visited[i][j] = 1;
        for (int x=0; x<l; x++){
            for (int y=0; y<b; y++)
            {
                cout << visited[x][y] << " ";
            }
            cout << endl;
        }
        return true;
    }
    visited[i][j] = 1;
    int x[] = {-1,1,0,0};
    int y[] = {0,0,1,-1};
    for (int k=0; k<4; k++)
    {
        int ni = i + x[k];
        int nj = j + y[k];
        if (ni>=0 and ni<=(l-1) and nj>=0 and nj <=(b-1) and maze[ni][nj] != 'X' and visited[ni][nj] != 1){
            int chotiProblem = solve(ni, nj, l,b);
            if (chotiProblem == true)
                return true;
        }
    }
    visited[i][j] = 0;
    return false;

}

int main(){
    int l, b;
    
    cin >> l >> b;
    // cout << "l = " << l;
    // cout << "b = " << b;
    cin.get();
    for (int i=0; i<l; i++){
        string s;
        // cin.getline(s, 1000,'\n')
        getline(cin, maze[i], '\n');
    }
    memset(visited, 0, sizeof(visited));
    solve(0,0,l,b);
    if (!flag){
        cout << "NO PATH FOUND";
    }
    return 0;
}