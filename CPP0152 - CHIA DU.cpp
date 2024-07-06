#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int a, m;
    cin >> a >> m;
    for(int i = 1; i < m; i++) {
        if((a * i) % m == 1) {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}