#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string x, y;
    cin >> x >> y;
    if (x.length() < y.length()) {
        swap(x, y);
    }
    while (x.length() > y.length()) {
        y = '0' + y;
    }
    int n = x.length() - 1;
    string res = "";
    int me = 0;
    while (n >= 0) {
        int t = x[n] - '0' + y[n] - '0' + me;
        me = 0;
        if (t >= 10) {
            t -= 10;
            me = 1;
        }
        res = to_string(t) + res;
        n --;
    }
    if (me > 0) {
        res = '1' + res;
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