#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++) {
        int count = 0;
        while(n % i == 0) {
            count ++;
            n /= i;
        }
        if(count > 0) {
            cout << i << " " << count << endl;
        }
    }
    if(n > 1) {
        cout << n << " 1";
    }
    return 0;
}