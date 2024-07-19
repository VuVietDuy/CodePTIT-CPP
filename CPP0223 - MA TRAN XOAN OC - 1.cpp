#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[102][102];

void print(int i, int j, string dir) {
    cout << a[i][j] << " ";
    a[i][j] = 0;
    if (dir == "r" && (j == m || a[i + 1][j] == 0)) dir = "d";
    else if (dir == "l" && (i == 1 || a[i - 1][j] == 0)) dir = "l";
    else if (dir == "u" && (j == 1 || a[i][j - 1] == 0)) dir = "u";
    else if (dir == "d" && (j == m || a[i][j + 1] == 0)) dir = "d";

    if (dir == "r") print(i + 1, j, "r");
    else if (dir == "l") print(i - 1, j, "l");
    else if (dir == "u") print(i, j + 1, "u");
    else if (dir == "d") print(i, j - 1, "d");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
    }
}