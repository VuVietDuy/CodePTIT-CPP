#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int i = 0;
        while(i < s.length()) {
            bool c = false;
            int j = i + 1;
            while(j < s.length()) {
                if(s[i] == s[j]) {
                    c = true;
                    s.erase(j, 1);
                    continue;
                }
                j++;
            }
            if (c) {
                s.erase(i, 1);
                continue;
            }
            i++;
        }
        cout << s << endl;
    }    
}