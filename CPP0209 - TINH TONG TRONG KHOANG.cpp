#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int arr[n];
        int Q[q][2];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> Q[i][0] >> Q[i][1];
        }
        for (int i = 0; i < q; i++) {
            int s = 0;
            for (int j = Q[i][0] - 1; j < Q[i][1]; j++) {
                s += arr[j];
            }
            cout << s << endl;
        }
    }
}