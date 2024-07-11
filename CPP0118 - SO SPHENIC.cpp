#include<bits/stdc++.h>
using namespace std;

int isSphenic(int n) {
    int i = 2;
    int d = 0;
    while (i <= n) {
        int c = 0;
        while (n % i == 0) {
            n /= i;
            d++;
            c++;
            if(c > 1) return 0;
        }
        i++;
    }
    if(d == 3) return 1;
    else return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = isSphenic(n);
        cout << res << endl;
    }
}