#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long maxA = LONG_LONG_MIN, minB = LONG_LONG_MAX;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            maxA = max(maxA, a);
        }
        for (int i = 0; i < m; i++) {
            long long b;
            cin >> b;
            minB = min(minB, b);
        }
        cout << maxA * minB << endl;
    }
}