#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = n - 1, c = 0;
    while (l < r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        } else if (a[l] < a[r]) {
            l++;
            a[l] += a[l - 1];
            a[l - 1] = -1;
            c++;
        } else {
            r--;
            a[r] += a[r + 1];
            a[r + 1] = -1;
            c++;
        }
    }
    cout << c << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}