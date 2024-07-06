#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        int res = 0;
        while (ss >> word) {
            ++res;
        }
        cout << res << endl;
    }    
}