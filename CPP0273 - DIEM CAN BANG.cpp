#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int sumR = 0, sumL = 0;
    for (int i = 2; i <= n; i++) {
        sumR += a[i];
    }
    if (sumR == sumL) {
        cout << 1 << endl;
        return;
    }
    for (int i = 2; i <= n; i++) {
        sumL += a[i - 1];
        sumR -= a[i];
        if (sumR == sumL) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}