#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] < a[j]) {
                res = max(res, j - i);
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

