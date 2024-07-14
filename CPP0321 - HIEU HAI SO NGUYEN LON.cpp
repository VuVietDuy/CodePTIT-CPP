#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string x, y;
    cin >> x >> y;
    if (x < y) {
        swap(x, y);
    }
    if (x.length() < y.length()) {
        swap(x, y);
    }
    while (x.length() > y.length()) {
        y = "0" + y;
    }
    int me = 0;
    int n = x.length() - 1;
    string res = "";
    while (n >= 0) {
        int a = x[n] - 48, b = y[n] - 48;
        int t;
        if (a < b + me) {
            t = a - b - me + 10;
            me = 1;
        } else {
            t = a - b - me;
            me = 0;
        }
        res = to_string(t) + res;
        n--;
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}