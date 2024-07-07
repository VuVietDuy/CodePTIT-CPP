#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int i = n;
    while(i >= 1 && a[i] <= n - 1) {
        i--;
    }
    if(i == 0) {
        for(int i = n; i >= 1; i++)
            a[i] = i;
            
    } else {
        a[i]++;
        for(int j = i + 1; j <= n; j++)
            a[j] = 1;
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}