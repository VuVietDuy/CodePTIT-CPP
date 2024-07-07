#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n] {};
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if(k < 0 || k >= n)
                continue;
            a[k] = k;
        }
        for (int i = 0; i < n; i++) {
            if(a[i] == 0 && i != 0) cout << -1 << " ";
            else cout << a[i] << " ";
        }
        cout << endl;
    }
}