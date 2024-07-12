#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int i = 2;
        while(n != 1) {
            int c = 0;
            while(n % i == 0) {
                c++;
                n /= i;
            }
            if(c > 0) {
                cout << i << " " << c << " ";
            }
            i++;
        }
        cout << "\n";
    }
    return 0;
}
