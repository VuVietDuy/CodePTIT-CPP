#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    for( int i = 0; i <= s.length()/2; i++ ) {
        if( s[i] != s[s.length()-i-1]) {
            cout << "NO" << endl;
            return;
        }
    }
    for( int i = 0; i < s.length(); i++ ) {
        if(s[i] % 2 != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}