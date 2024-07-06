#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long res = 1;
        for (int i = 1; i <= n; i++) {
            if(res % i != 0) {
                res *= i;
            }
        }
        cout << res << endl;
    }
}