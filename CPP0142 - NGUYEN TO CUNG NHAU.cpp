#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void testCase() {
    int x;
    cin >> x;
    int t = 0;
    for (int k = 1; k <= x; k++) {
        if (__gcd(x, k) == 1) {
            t++;
        }
    }
    if (isPrime(t)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}