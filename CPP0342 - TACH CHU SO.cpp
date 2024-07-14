#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    vector<char> c;
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            sum += s[i] - 48;
        } else {
            c.push_back(s[i]);
        }
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); i++) {
        cout << c[i];
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}