#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    set<string> set;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        set.insert(s);   
    }
    cout << set.size() << endl;
}