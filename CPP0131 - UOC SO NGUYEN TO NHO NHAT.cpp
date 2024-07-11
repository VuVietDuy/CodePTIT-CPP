#include<bits/stdc++.h>
using namespace std;

int minPrime(int n) {
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << 1 << " ";
                continue;
            }
            if (i % 2 == 0) {
                cout << 2 << " ";
                continue;
            }
            int prime = minPrime(i);
            cout << prime << " ";
        }
        cout << endl;
    }
}