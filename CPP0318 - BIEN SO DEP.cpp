#include<bits/stdc++.h>
using namespace std;

bool fiCheck(string s) {
    for (int i = 0; i < 5 - 1; i++) {
        if (s[i] != s[i + 1] - 1) {
            return false;
        }
    }
    return true;
}

bool seCheck(string s) {
    for (int i = 0; i < 5; i++) {
        if (s[i] != '6' && s[i] != '8') {
            return false;
        }
    }
    return true;
}

bool thCheck(string s) {
    for (int i = 0; i < 3 - 1; i++) {
        if (s[i] != s[i +  1]) {
            return false;
        }
    }
    if (s[3] != s[4]) {
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string n = s.substr(5, 10);
        n.erase(3, 1);
        if (fiCheck(n) || seCheck(n) || thCheck(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}