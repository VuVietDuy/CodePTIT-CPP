#include<bits/stdc++.h>
using namespace std;

struct P {
    int id, fi, se;
};

bool cmp(P a, P b) {
    if (a.se < b.se) return true;
    if (a.se == b.se && a.id < b.id) return true;
    return false;
}

void testCase() {
    int n, x;
    cin >> n >> x;
    vector<P> a(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i].id = i;
        a[i].fi = k;
        a[i].se = abs(x - k);
    }
    sort(a.begin(), a.end(), cmp);
    for (P x : a) {
        cout << x.fi << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}