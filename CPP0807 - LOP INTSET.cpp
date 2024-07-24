#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream file;
    file.open("DATA.in", ios::binary);
    int n, m;
    file >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int num;
        file >> num;
        mp[num] = 1;
    }
    for (int i = 0; i < m; i++) {
        int num;
        file >> num;
        if (mp[num] == 1)
            mp[num] = 2;
    }
    for (auto p : mp) {
        if (p.second == 2)
            cout << p.first << " ";
    }
}