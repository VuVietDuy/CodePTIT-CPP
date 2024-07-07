#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> se;
        int l = INT_MIN, r = INT_MAX;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            se.insert(k);
            l = max(l, k);
            r = min(r, k);
        }
        cout << (l - r + 1 - se.size()) << endl;
    }
}