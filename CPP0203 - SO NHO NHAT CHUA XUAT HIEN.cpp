#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    sort(arr, arr + n);
    int res = 1;
    for (int i = 0; i < n; i++) {
        if(arr[i] > res && arr[i] > 0) {
            break;
        } else if(arr[i] == res && arr[i] > 0) {
            res++;
        }
    }
    
    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}