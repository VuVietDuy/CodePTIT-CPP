#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, res = "";
    int fi = 1;
    while (cin >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (fi == 1) {
            s[0] = toupper(s[0]);
            fi = 0;
        }
        char e = s[s.length() - 1];
        if (e == '.' || e == '?' || e == '!') {
            s.pop_back();
            fi = 1;
            res += s + '\n';
        } else {
            res += s + " ";
        }
    }
    cout << res << endl;
}