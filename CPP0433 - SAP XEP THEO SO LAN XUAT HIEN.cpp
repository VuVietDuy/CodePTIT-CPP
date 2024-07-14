#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second > b.second) return true;
    if (a.second == b.second && a.first < b.first) return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            mp[k]++;
        }
        vector<pair<int, int> > B;
        for (auto& it : mp) {
            B.push_back(it);
        }
        sort(B.begin(), B.end(), cmp);
        for (int i = 0; i < B.size(); i++) {
            int count = B[i].second;
            while (count--) {
                cout << B[i].first << " ";
            }
        }
        cout << endl;
    }
}