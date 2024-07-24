#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    if (s.length() == 1) return false;
    string o = s;
    reverse(s.begin(), s.end());
    if (s == o) return true;
    else return false;
}

bool cmp(string s1, string s2) {
    if (s1.length() != s2.length()) return s1.length() > s2.length();
    return s1 > s2;
}

int main() {
    string s;
    map<string, int> mp;
    vector<string> v;
    while (cin >> s) {
        if (check(s)) {
            mp[s]++;
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        if (mp[x] > 0) {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0; // reset count for the same string
        }
    }
}