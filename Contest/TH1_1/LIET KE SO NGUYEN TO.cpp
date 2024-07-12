#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void testCase() {
    int n;
    bool ok = false;
    cin >> n;
    int a, f[201] {};
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a;
        f[a] = 1;
        if (a > max) max = a;
    }
    for (int i = 1; i <= max; i++) {
        if (f[i] == 0 && isPrime(i)) {
            cout << i << " ";
            ok = true;
        }
    }
    if (!ok) cout << "Yes";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}