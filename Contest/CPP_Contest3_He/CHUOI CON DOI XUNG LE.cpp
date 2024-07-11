#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int posRes = 0;
        int lengthRes = 0;
        int l = s.length();
        string res = "";
        for (int i = 0; i < l; i++) {
            for (int j = i; j < l; j++) {
                string fi = s.substr(i, j);
                string fe = fi;
                reverse(fi.begin(), fi.end());
                if (fi == fe && fi.length() % 2 != 0 && fi.length() > res.length())
                    res = fi;
            }
        }
        if (res != "")
            cout << res << endl;
        else
            cout << "No" << endl;
    }
}