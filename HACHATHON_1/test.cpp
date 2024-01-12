#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // Input the dimensions of the grid

    char grid[n][m]; // Declare a 2D array to store the grid

    // Input the grid characters
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Print the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
