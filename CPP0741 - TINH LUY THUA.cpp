#include<bits/stdc++.h>
using namespace std;

void testCase() {
    long long x, y, p;
    cin >> x >> y >> p;
    long long res = 1;
    while(y--) {
        res = (res * x) % p;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}