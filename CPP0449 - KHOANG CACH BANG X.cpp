#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--) {
        int k = a[i] - x;
        if (binary_search(a, a + i - 1, k)) {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }
}