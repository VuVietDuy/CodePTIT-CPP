#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int k;
        cin >> s >> k;
        if(s.length() < 26) {
            cout << 0 << endl;
            continue;
        }
        set<char> set;
        for(int i = 0; i < s.length(); i++) {
            set.insert(s[i]);
        }
        if(26 - set.size() <= k) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }    
}