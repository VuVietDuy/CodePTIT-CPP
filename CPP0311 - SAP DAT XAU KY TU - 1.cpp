#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    cin >> s;
    map<char, int> mp;
    for(char c : s) {
        mp[c]++;
    }
    int n = s.length();
    for (auto it : mp) {
        if (it.second > n / 2) {
            cout << 0 << endl;
            return;
        } 
    }
    cout << 1 << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}