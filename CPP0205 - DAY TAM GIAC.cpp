#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long arr[n];
        int res = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(res < arr[i]) 
                res = arr[i];
        }
            
        cout << res << "\n";
    }
}