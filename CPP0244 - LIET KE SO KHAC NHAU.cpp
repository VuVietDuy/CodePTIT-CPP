#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> res;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        res.insert(k);
    }
    for(int x : res) {
        cout << x << " ";
    }
}