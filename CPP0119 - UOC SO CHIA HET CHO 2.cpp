#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        int c = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (i % 2 == 0) 
                    c++;
                if ((n / i) % 2 == 0 && i * i != n)
                    c++;
            }
        }
        cout << c << endl;
    }
}