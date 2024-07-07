#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int res = 0;
        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if(k == x) {
                res++;
            }
        }
        if(res) 
            cout << res << endl;
        else
            cout << -1 << endl;
    }
}