#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        int s = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= k) {
                s++;
            }
        }
        // cout << "s: " << s << endl;
        int c = 0;
        for (int i = 0; i < s; i++) {
            if (a[i] <= k) {
                c++;
            }
        }
        // cout << "c0: " << c << endl;
        int m = c;
        for (int i = 1; i <= n - s; i++) {
            if (a[i - 1] <= k) c--;
            if (a[i + s - 1] <= k) c++;
            // cout << "c" << i << ": " << c << endl;
            if (c > m) m = c;
        }
        cout << s - m << endl;
    }
}