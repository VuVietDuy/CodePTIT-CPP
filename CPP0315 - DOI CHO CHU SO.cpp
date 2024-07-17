#include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b) {
    return a > b;
}

void testCase() {
    string s;
    cin >> s;
    int n = s.length();
    int i = n - 1;
    char c[n];
    for (int j = 0; j < n; j++) {
        c[j] = s[j];
    }
    while (i > 0 && c[i] >= c[i - 1]) {
        i--;
    }
    if (i == 0) {
        cout << -1 << endl;
        return;
    }
    i--;
    for (int j = n - 1; j > i; j--) {
        if (c[j] < c[i] && c[j] != c[j - 1]) {
            swap(c[j], c[i]);
            for (int j = 0; j < n; j++) {
                cout << c[j];
            }
            cout << endl;
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
    return 0;
}