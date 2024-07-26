#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k, x;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    cin >> k >> x;
    int idx = mp[x];
    int r = idx + 1, l = idx - 1;
    vector<int> res;
    while (idx--) {
        if (x - a[l] <= a[r] - x) {
            res.push_back(a[l]);
            l--;
        } else {
            res.push_back(a[r]);
            r++;
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < k; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }
}