#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int A[n][m];
        int row[n] = {0};
        int col[m] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
                if(A[i][j] == 1) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(col[j] == 1 || row[i] == 1) cout << 1 << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        }
    }
}