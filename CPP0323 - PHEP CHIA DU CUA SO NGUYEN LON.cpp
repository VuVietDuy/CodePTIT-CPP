#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string n;
    long long m;
    cin >> n >> m;
    long long r = 0;
    for (int i = 0; i < n.length(); i++) {
        string t = to_string(r) + n[i];
        r = stoll(t) % m;
    }
    cout << r << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}