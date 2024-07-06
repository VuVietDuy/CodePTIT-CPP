#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][3];
    int res = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
            if (A[i][j] == 1) count++;
        }
        if (count >= 2) res ++;
    }
    cout << res << endl;
}