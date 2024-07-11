#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(abs(a[i] + a[j]) < abs(s)) {
                s = a[i] + a[j];
            }
        }
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}