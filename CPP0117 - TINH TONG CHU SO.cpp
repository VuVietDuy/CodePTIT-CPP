#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = n;
        while(res >= 10) {
            res = 0;
            while (n > 0)
            {
                res += n % 10;
                n /= 10;
            }
            n = res;
        }
        cout << res << endl;
    }
}