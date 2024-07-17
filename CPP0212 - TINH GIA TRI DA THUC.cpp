#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

void testCase() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = n - 1; i >= 0; i--) {
        cin >> a[i];
    }
    long long t = 1, res = 0;
    for (int i = 0; i < n; i++) {
        res = (res + a[i] * t) % mod;
        t = t * x % mod;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}