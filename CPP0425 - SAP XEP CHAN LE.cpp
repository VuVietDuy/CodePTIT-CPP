#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int res[n], j = 0;
        for(int i = 0; i < n; i += 2) {
            res[i] = a[j];
            j++;
        }
        for(int i = 1; i < n; i += 2) {
            res[i] = a[j];
            j++;
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}