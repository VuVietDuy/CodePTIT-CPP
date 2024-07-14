#include<bits/stdc++.h>
using namespace std;

void cmp(int a, int b) {
    vector<int> x, y;
    while (a > 0) {
        x.push_back(a % 10);
        a /= 10;
    }
    while (b > 0) {
        y.push_back(b % 10);
        b /= 10;
    }
    int n = x.size(), m = y.size();
    while ()
}

void testCase() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}