#include<bits/stdc++.h>
using namespace std;

int n, k, c;
int a[21][21];

void Try(int i, int j, int sum) {
    sum += a[i][j];
    if (i == n - 1 && j == n - 1 && sum == k) {
        c++;
    }
    if (i < n - 1) {
        Try(i + 1, j, sum);
    }
    if (j < n - 1) {
        Try(i, j + 1, sum);
    }
}

void testCase() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    c = 0;
    Try(0, 0, 0);
    cout << c << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}