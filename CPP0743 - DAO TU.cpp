#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string res = "", w;
    while(ss >> w) {
        res = w + " " + res ;
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        testCase();
    }
}