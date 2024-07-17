#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s1, s2, w;
    map<string, int> mp;
    vector<string> v;
    getline(cin, s1);
    getline(cin, s2);
    stringstream ss1(s1);
    while (ss1 >> w) {
        v.push_back(w);
        mp[w] = 1;
    }
    sort(v.begin(), v.end());
    stringstream ss2(s2);
    while (ss2 >> w) {
        mp[w] = 2;
    }
    for (auto x : v) {
        if (mp[x] == 1) {
            cout << x << " ";
            mp[x] = 0;
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  // consume newline character after t input
    while (t--) {
        testCase();
    }
    return 0;
}