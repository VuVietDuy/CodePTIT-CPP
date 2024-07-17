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
    int l, r;
    cin >> l >> r;
    int c = 0;
    for (int i = l; i <= r; i++) {
        if (isPrime(i)) {
            c++;
        }
    }
    cout << c << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}