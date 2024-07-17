#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = -1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                int t = a[j] - a[i];
                res = max(t, res);
            }
        }
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