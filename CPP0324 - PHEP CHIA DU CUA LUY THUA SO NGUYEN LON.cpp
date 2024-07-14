#include<bits/stdc++.h>
using namespace std;

long long cal(long long x, long long b, long long k) {
    if (b == 1) {
        return x;
    } else {
        int temp = cal(x, b/2, k);
        if (b % 2 == 0) {
            return (temp * temp) % k;
        } else {
            return (temp * temp * x) % k;
        }
    }
}

void testCase() {
    string a;
    long long b, m;
    cin >> a >> b >> m;
    long long r = 0;
    for (int i = 0; i < a.length(); i++) {
        string t = to_string(r) + a[i];
        r = stoll(t) % m;
    }
    long long k = 1;
    for (int i = 1; i <= b; i++) {
        k = (k * r) % m;
    }
    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}