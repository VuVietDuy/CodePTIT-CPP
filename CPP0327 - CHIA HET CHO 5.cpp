#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long num = 0, n = s.length();
        for( int i = 0; i < n; i++ ) {
            num += pow(2, n - i - 1) * (s[i] - 48);
        }
        cout << num << endl;
        if(num % 5 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }    
}