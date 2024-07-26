#include<bits/stdc++.h>
using namespace std;

long long Mul(long long a, long long b, long long c) {
    if (b == 0) return 0;
    if (b == 1) return a % c;
    long long temp = Mul(a, b / 2, c);
    long long res = 2 * temp % c;
    if (b & 1) return (res + a) % c;
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long res = Mul(a, b, c);
        cout << res << "\n";
    }
}