#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b; // Sort lexicographically if lengths are equal
}

int main() {
    ifstream file;
    file.open("DATA.in");
    string num;
    map<string, int> mp;
    vector<string> v;
    while (file >> num) {
        mp[num]++;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        if (mp[x] > 0) {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0; // Reset the count for the current number
        }
    }
}