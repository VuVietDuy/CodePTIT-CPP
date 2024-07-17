#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    vector<int> a1(n), a2(n);
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a2[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        int sumi = 0, sumj = 0;
        for (int j = i; j < n; j++) {
            sumi += a1[j];
            sumj += a2[j];
            if (sumi == sumj) {
                res = max(res, j - i + 1);
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