#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, sub;
    getline(cin, s);
    cin >> sub;
    int n = s.find(sub);
    s.erase(n, sub.length());
    cout << s << endl;
    return 0;
}