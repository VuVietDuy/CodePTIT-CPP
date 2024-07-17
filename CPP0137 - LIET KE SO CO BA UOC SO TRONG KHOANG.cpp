#include<bits/stdc++.h>
using namespace std;

long long fib[93];

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void testCase() {
    long long l, r;
    cin >> l >> r;
    long long a = ceil(sqrt(l)), b = floor(sqrt(r));
    int c = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) c++;
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