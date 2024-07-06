#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;
        double dist = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
        cout << fixed << setprecision(4) << dist << endl;
    }
}