#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    while(a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long a, b;
        cin >> a >> b;
        long ucln = gcd(a,b);
        long bcnn = (a * b) / ucln;
        cout << bcnn << " " << ucln << endl;
    }
}