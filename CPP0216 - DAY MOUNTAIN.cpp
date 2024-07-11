#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l, r;
    cin >> l >> r;
    bool isIncrease = true ,isDecrease = false;
    for (int i = l + 1; i <= r; i++) {
        if (isIncrease) {
            if (a[i] < a[i - 1]) {
                cout << "No" << endl;
                return;
            }
        }
        if (isDecrease) {
            if (a[i] > a[i - 1]) {
                cout << "No" << endl;
                return;
            }
        }
        if (a[i] > a[i + 1]) {
            isDecrease = true;
            isIncrease = false;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}