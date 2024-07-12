#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int x = n % k;
        int y = n / k;
        int s = x * (x + 1) / 2 + (k - 1) * k / 2 * y;
        if(s == k) cout << 1 << endl;
        else cout << 0 << endl;
    }
}