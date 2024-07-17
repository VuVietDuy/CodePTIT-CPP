#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        int l = n * n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x;
                cin >> x;
                if (mp[x] == i - 1) {
                    mp[x] = i;
                }
            }
        }
        int count = 0;
        for (auto x : mp) {
            if (x.second == n) {
                count++;
            }
        }
        cout << count << endl;
    }
}