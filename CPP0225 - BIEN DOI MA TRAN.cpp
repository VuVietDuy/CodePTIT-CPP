#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n][n];
        int row[n] {}, col[n] {};
        int tar = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                row[i] += a[i][j];
                col[j] += a[i][j];
                tar = max(tar, row[i]);
                tar = max(tar, col[j]);
                sum += a[i][j];
            }
        }
        cout << tar * n - sum << endl;
    }
}