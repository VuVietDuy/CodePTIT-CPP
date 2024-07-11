#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b > 0)
    {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long res = 1;
        for (long long i = 2; i <= n; i += 1) {
            res = (i * res) / gcd(i, res);
        }
        cout << res << endl;
    }
}