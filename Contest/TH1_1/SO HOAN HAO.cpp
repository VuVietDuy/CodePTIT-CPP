#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    for (int i = 2; i<= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

bool isPerfectNumber(long long n) {
    for (int i = 1; i <= 32; i++) {
        if(isPrime(i)) {
            int tmp = (int)pow(2, i) - 1;
            if (isPrime(tmp)) {
                long long hh = 1ll*tmp * (int)pow(2, i - 1);
                if (hh == n) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long n;
        cin >> n;
        if (isPerfectNumber(n)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}
