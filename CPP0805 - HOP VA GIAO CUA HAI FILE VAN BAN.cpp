#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream f1, f2;
    f1.open("DATA1.in");
    f2.open("DATA2.in");
    vector<string> v;
    map<string, int> mp;
    string s;
    while (f1 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
        mp[s] = 1;
    }
    while (f2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (mp[s] == 1) {
            mp[s] = 2;
        }
    }
    for (auto p : mp) {
        cout << p.first << " ";
    }
    cout << endl;
    for (auto p : mp) {
        if (p.second == 2) 
            cout << p.first << " ";
    }
}