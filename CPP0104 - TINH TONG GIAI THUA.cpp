#include<bits/stdc++.h>
using namespace std;

int main() {
    long long s = 0, tmp = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tmp *= i;
        s += tmp;
    }
    cout << s << endl;
    return 0;
}