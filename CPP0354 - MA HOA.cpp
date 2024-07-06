#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char curChar = s[0];
        int count = 0;
        for(int i = 0; i < s.length(); i++ ) {
            if(s[i] != curChar) {
                cout << curChar << count;
                curChar = s[i];
                count = 1;
            } else {
                count++;
            }
        }
        cout << curChar << count << endl;
    }
}