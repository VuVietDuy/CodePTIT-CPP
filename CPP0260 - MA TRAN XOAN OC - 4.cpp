#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n * n];
    for (int i = 0; i < n * n; i++) {
        cin >> a[i];
    }
    sort(a, a + n * n);
    int b[n][n] {};
    int i = 0, j = 0, c = 0;
    string dir = "r";
    while (b[i][j] == 0) {
        b[i][j] = a[c];
        c++;
        if (dir == "r") {
            if (j < n - 1 && b[i][j + 1] == 0) {
                j++;
            } else {
                dir = "d";
                i++;
            }
        } else if (dir == "d") {
            if (i < n - 1 && b[i + 1][j] == 0) {
                i++;
            } else {
                dir = "l";
                j--;
            }
        } else if (dir == "l") {
            if (j > 0 && b[i][j - 1] == 0) {
                j--;
            } else {
                dir = "u";
                i--;
            }
        } else if (dir == "u") {
            if (i > 0 && b[i - 1][j] == 0) {
                i--;
            } else {
                dir = "r";
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}