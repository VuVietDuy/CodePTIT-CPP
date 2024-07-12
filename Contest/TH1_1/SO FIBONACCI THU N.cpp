#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long fib[92];
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i < 92; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    while(t--) {
        int n;
        cin >> n;
        cout << fib[n-1] << endl;
    }
}