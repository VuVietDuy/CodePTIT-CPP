#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n] {};
        for (int i = 0; i < n; i++) {
            a[i] = -1;
        }
        for (int i = 0; i < n; i++) {
            ll k;
            cin >> k;
            if(k < 0 || k >= n)
                continue;
            a[k] = k;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}