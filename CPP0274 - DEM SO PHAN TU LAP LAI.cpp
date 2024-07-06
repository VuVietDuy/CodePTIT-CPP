#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A, A + n);
        int count = 0;
        int curValue = A[0] - 1;
        for (int i = 0; i < n - 1; i++) {
            if (A[i] == A[i + 1]) {
                count++;
                if (curValue != A[i]) {
                    count++;
                    curValue = A[i];
                }
            }
        }
        cout << count << endl;
    }
}