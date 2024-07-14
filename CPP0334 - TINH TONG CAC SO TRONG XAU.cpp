#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    long res = 0, num = 0;
    for(int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
        } else {
            res += num;
            num = 0;
        }
    }
    res += num;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}