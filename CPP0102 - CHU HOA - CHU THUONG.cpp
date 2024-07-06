#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z') {
            cout << (char)(c - 'a' + 'A') << endl;
        } else {
            cout << (char)(c - 'A' + 'a') << endl;
        }
    }
    
}