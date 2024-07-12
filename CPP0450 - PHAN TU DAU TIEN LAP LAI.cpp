#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n];
    int b[10000000] {};
    int res = -1, ok = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[a[i]] ++;
        if(b[a[i]] == 2 && ok == 0) {
            ok = 1;
            res = a[i];
        }
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