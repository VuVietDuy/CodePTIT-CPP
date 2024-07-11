#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int i = n;
    while(i >= 1 && a[i] > a[i - 1]) {
        i--;
    }
    if(i == 0) {
        for (int j = 1; j <= n; j++) {
            a[j] = n - j + 1;
        }
    } else {
        i--;
        swap(a[i], a[n]);
        sort(a + i + 1, a + n);
    }
    for (int j = 1; j <= n; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}