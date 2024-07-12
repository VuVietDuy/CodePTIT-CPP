#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long x = n % k;
        long long y = n / k;
        long long sum = (x * (x + 1) / 2) + ((k - 1) * k / 2) * y;
        cout << sum << endl;
    }
}