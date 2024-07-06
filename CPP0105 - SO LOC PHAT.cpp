#include<bits/stdc++.h>
using namespace std;

bool check(string n) {
    int l = n.length();
    for(int i=0; i<l/2; i++)
        if(n[i] != '0' && n[i] != '6' && n[i] != '8')
            return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        if(check(n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}