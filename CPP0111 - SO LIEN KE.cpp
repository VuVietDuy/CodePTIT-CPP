#include<bits/stdc++.h>
using namespace std;

bool check(string n) {
    for (int i = 0; i < n.length() - 1; i++) {
        if(abs(n[i] - n[i + 1]) != 1) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}