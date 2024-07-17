#include<bits/stdc++.h>
using namespace std;

long long fib[93];

void testCase() {
    long long n;
    cin >> n;
    int l = 0, r = 92;
    while (l <= r) {
        int m = (l + r) / 2;
        if (fib[m] == n) {
            cout << "YES" << endl;
            return;
        } else if (fib[m] > n) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 93; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    while (t--) {
        testCase();
    }
}