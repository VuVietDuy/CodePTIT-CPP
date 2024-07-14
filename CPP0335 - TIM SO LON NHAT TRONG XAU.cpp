#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = 0, res = -1;
        for (int i = 0; i < s.length(); i++) {
            if (s[1] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
            } else {
                res = max(num, res);
                num = 0;
            }
        }
        cout << res << endl;
    }
}