#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    long fi = LONG_MAX, se = LONG_MAX;
    bool ok = false;
    for(int i = 0; i < n; i++) {
        long k;
        cin >> k;
        if(k < fi) {
            if(fi < se) {
                se = fi;
                ok = true;
            }
            fi = k;
        }
        if(k < se && k > fi) {
            se = k;
            ok = true;
        }
    }
    if(ok) 
        cout << fi << " " << se << endl;
    else 
        cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}