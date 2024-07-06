#include<bits/stdc++.h>
using namespace std;

bool isSquared(int n) {
    int x = sqrt(n);
    return pow(x, 2) == n;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            if (isSquared(i) && isPrime(sqrt(i))) {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}