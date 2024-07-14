#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    map<int, string> mp;
    for (int i = 0; i < n - 1; i++) {
        mp[b[i]] = to_string(b[i + 1]); 
    }
    mp[b[n - 1]] = "_";
    for (int i = 0; i < n; i++) {
        cout << mp[a[i]] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}