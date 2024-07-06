#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a = 0, b = 0, c = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if(k == 0) a++;
            else if(k == 1) b++;
            else c++;
        }
        for(int i = 0; i < a; i++) {
            cout << "0 ";
        }
        for(int i = 0; i < b; i++) {
            cout << "1 ";
        }
        for(int i = 0; i < c; i++) {
            cout << "2 ";
        }
        cout << endl;
    }
}