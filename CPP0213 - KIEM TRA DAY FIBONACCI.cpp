#include<bits/stdc++.h>
using namespace std;

map<long long, int> mp;

void testCase() {
    long long n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] == 1) {
            cout << a[i] << " ";
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    long long f1 = 0, f2 = 1;
    mp[0] = 1;
    for (int i = 2; i <= 17; i++) {
        long long fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        mp[fn] = 1;
    }
    while (t--) {
        testCase();
    }
}