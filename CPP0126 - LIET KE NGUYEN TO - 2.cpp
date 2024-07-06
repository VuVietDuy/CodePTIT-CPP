#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int i = 2, j = n;
        bool ok = false;
        while(i <= j) {
            if(i + j < n) {
                i++;
            } else if(i + j > n) {
                j--;
            } else if(i + j == n) {
                if(checkPrime(i) && checkPrime(j)) {
                    cout << i << " " << j;
                    ok = true;
                    break;
                }
                i++;
                j--;
            }
        }
        if(!ok) cout << "-1";
        cout << endl;
    }
}