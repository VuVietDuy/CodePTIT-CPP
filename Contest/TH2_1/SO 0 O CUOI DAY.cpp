#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    vector<long long> a;
    vector<long long> b;
    for(int i = 0; i < n; i++) {
        long long k;
        cin >> k;
        if(k != 0) a.push_back(k);
        else b.push_back(k);
    }
    for(long long x : a) cout << x << " ";
    for(long long x : b) cout << x << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}