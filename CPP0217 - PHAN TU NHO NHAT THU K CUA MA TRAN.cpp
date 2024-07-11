#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int l = n * n;
        int a[l];
        for (int i = 0; i < l; i++) {
            cin >> a[i];
        }
        sort(a, a + l);
        cout << a[k - 1] << endl;
    }
}