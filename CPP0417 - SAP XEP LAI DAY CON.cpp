#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(), a.begin() + n);
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (l == -1) l = i;
                r = i;
            } 
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
}