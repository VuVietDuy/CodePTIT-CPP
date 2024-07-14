#include<bits/stdc++.h>
using namespace std;

void testCase() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < max(a.size(), b.size()); i++) {
        if (i < a.size()) if (a[i] == '6') a[i] = '5';
        if (i < b.size()) if (b[i] == '6') b[i] = '5';
    }
    long long minSum = stoll(a) + stoll(b);
    cout << minSum << " ";
    for (int i = 0; i < max(a.size(), b.size()); i++) {
        if (i < a.size()) if (a[i] == '5') a[i] = '6';
        if (i < b.size()) if (b[i] == '5') b[i] = '6';
    }
    long long maxSum = stoll(a) + stoll(b);
    cout << maxSum << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        testCase();
    }    
}