#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    bool ok = false;
    cin >> n;
    int a[n], f[201] {};
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]] = 1;
        if (a[i] > max) max = a[i];
    }
    for (int i = 1; i <= max; i++) {
        if (f[i] == 0 && i % 2 == 0) {
            cout << i << " ";
            ok = true;
        }
    }
    if (!ok) cout << "Yes";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}