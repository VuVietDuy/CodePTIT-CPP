#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int c = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (isPrime(i)) c++;
        }
        cout << c << endl;
    }
}