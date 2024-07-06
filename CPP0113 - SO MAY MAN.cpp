#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        if(s[n-2] == '8' && s[n-1] == '6') {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}