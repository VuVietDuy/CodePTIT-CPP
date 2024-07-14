#include<bits/stdc++.h>
using namespace std;

long long binarySearch(long long a[], int n, int l, int r, long long x) {
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            return m;
        } else if (a[m] < x) { 
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

long long isOk(long long a, long long b) {
    long long c2 = a * a + b * b;
    long long c = sqrt(c2);
    if (c * c == c2) return c;
    return -1;
}

void testCase() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            long long c = isOk(a[i], a[j]);
            if (c != -1) {
                int res = binarySearch(a, n, j + 1, n - 1, c);
                if (res!= -1) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}