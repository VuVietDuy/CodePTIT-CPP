#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    while (s.length() > 1) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s[i] - 48;
        }
        s = to_string(sum);
    }
    if (s == "9") cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}