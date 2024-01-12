#include <bits/stdc++.h>
using namespace std;
char wts[30][30];
int x[] = {-1, 1, 0, 0};
int y[] = {0, 0, 1, -1};
int solve(int si, int sj, int di, int dj){
    // Base Case;

    for (int i=0; i<4; i++)
    {
        int ni = si + x[i];
        int nj = 
    }

}

int main(){
    int w,h;
    cin >> w >> h;
    while (w != 0 and h != 0)
    {
        int si,sj,di,dj;
        for (int i=0; i<h; i++)
        {
            for (int j=0; j<w; j++)
            {
                cin >> wts[i][j];
                if (wts[i][j] == 'S'){
                    si = i; sj = j;
                }
                if (wts[i][j] == 'D'){
                    di = i; dj = j;
                }

            }
        }
    }

    return 0;
}
