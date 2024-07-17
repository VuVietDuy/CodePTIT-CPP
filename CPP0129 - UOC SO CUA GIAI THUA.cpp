#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n, p;
    cin >> n >> p;
    int x = 0;
    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t % p == 0) {
            x++;
            t /= p;
        }
    }
    cout << x << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}