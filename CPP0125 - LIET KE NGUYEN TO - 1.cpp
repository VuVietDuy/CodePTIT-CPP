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
    int a, b;
    cin >> a >> b;
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    for(int i = a + 1; i < b; i++) {
        if(checkPrime(i)) {
            cout << i << " ";
        }
    }
}