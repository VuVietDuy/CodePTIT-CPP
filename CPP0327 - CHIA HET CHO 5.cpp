#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long r = 0;
        int n = s.length();
        for( int i = 0; i < n; i++ ) {
            r = (2 * r + (s[i] - 48)) % 5;
        }
        if(r == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }    
}