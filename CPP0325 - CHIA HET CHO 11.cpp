#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int e = 0, o = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i % 2 == 0) e += s[i] - 48;
            else o += s[i] - 48;
        }
        if(e == 0 || (e - o) % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }    
}