#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[n][m];

void print(int i, int j) {
    cout << a[i][j] << " ";
    a[i][j] = 0;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

    }
}