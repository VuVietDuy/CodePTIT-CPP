#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long res = 0;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
        auto it = lower_bound(a + i + 1, a + n, k + a[i]);
        int x = it - (a + i) - 1;
        res += x;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}