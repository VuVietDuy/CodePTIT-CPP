#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<long long> se;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            while(x > 0) {
                int k = x % 10;
                x /= 10;
                se.insert(k);
            }
        }
        for(long long x : se) 
            cout << x << " ";

        cout << endl;
    }
}