#include<bits/stdc++.h>
using namespace std;

long long mod = 10e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long ng = 1;
        for (int i = 1; i <= n; i++) {
            ng = (ng * i) % mod;
        }
        long long kg = 1;
        for (int i = 1; i <= k; i++) {
            kg = (kg * i) % mod;
        }
        long long nkg = 1;
        for (int i = 1; i <= n - k; i++) {
            nkg = (nkg * i) % mod;
        }
        long long nCk = ng / (kg * nkg);
        cout << nCk % mod << endl;
    }
}