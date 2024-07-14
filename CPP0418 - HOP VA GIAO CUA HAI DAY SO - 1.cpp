#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> x;
            mp[x]++;
        }
        for (auto it : mp) {
            cout << it.first << " ";
        }
        cout << endl;
        for (auto it : mp) {
            if (it.second >= 2) {
                cout << it.first << " ";
            }
        }
        cout << endl;
    }
}