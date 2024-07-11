#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int l = n + m;
        long a[l];
        for(int i = 0; i < l; i++) {
            cin >> a[i];
        }
        sort(a, a + l);
        for(int i = 0; i < l; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}