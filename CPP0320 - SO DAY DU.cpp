#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    int a[10] {};
    int n = s.length();
    if (s[0] == '0') {
        cout << "INVALID" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            a[s[i] - 48] = 1;
        } else {
            cout << "INVALID" << endl;
            return;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] == 0) {
            cout << "NO" << endl;
            return;
        }
    } 
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}