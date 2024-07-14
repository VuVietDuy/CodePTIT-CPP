#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, b;
    cin >> n >> k >> b;
    int a[n] {};
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        a[x - 1] = 1;
    }
    int tmp = 0;
    for (int i = 0; i < k; i++) {
        if (a[i] == 1) tmp++;
    }
    int res = tmp;
    for (int i = 1; i <= n - k; i++) {
        if (a[i - 1] == 1) tmp--;
        if (a[i + k - 1] == 1) tmp++;
        res = min(res, tmp);
    }
    cout << res << endl;
}