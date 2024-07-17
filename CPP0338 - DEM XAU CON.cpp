#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    int k;
    cin >> s >> k;
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; ++i) {
        set<int> set;
        for (int j = 1; j <= n - i; ++j) {
            set.insert(s[i + j - 1]);
            if (set.size() == k) {
                count++;
            } else if (set.size() > k) {
                break;
            }
        }
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
    return 0;
}