#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long res = 1;
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                res = i;
                n /= i;
            }
        }

        if(n > res) res = n;
        cout << res << endl;
    } 
}