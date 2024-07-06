#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 2; i < n; i++) {
            int c = 0;
            while(n % i == 0) {
                n /= i;
                c++;
            }
            if(c > 0) {
                cout << i << " " << c << " ";
            }
        }
        if(n > 1) {
            cout << n << " 1" << endl;
        } else {
            cout << endl;
        }
    }
}