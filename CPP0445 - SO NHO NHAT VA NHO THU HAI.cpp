#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int fi = INT_MAX, se = INT_MAX;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(k < fi) {
            se = fi;
            fi = k;
        }
    }
    if(fi == se) 
        cout << fi << se << endl;
    else   
        cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}