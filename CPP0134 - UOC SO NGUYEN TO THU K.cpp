#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            n /= i;
            count++;
            if(count == k) {
                cout << i << endl;
                return;
            }
        }
    }
    if(n > 1) {
        count++;
    }
    if(count == k) {
        cout << n << endl;
    } else 
        cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}