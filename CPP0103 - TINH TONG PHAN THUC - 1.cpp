#include<bits/stdc++.h>
using namespace std;

int main() {
    double s = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s += 1.0/i;
    }
    cout << fixed << setprecision(4) << s << endl;
}