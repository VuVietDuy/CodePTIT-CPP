#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        vector<int> a(k * n);
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i * n + j];
            }
        }
        sort(a.begin(), a.end());
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
}