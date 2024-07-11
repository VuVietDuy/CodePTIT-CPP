#include<bits/stdc++.h>
using namespace std;

int n;
int a[21] {}, b[21] {};

void print() {
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (b[j] == 0) {
            a[i] = j;
            b[j] = 1;
            if (i == n) {
                print();
            } else {
                Try(i + 1);
            }
            b[j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(1);
        cout << endl;   
    }
}