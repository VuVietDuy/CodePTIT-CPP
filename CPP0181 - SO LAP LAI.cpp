#include<bits/stdc++.h>
using namespace std;

void testCase() {
    long long a, x, y;
    cin >> a >> x >> y;
    long long c = __gcd(x, y);
    for (int i = 0; i < c; i++) cout << a;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}