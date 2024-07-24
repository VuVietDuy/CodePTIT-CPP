#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    string a;
    cin >> n >> a;
    int mp[10] {};
    for (int i = 0; i < n; i++) {
        if (a[i] == '2') {mp[2]++;}
        else if (a[i] == '3') {mp[3]++;}
        else if (a[i] == '4') {mp[3]++; mp[2]++; mp[2]++;}
        else if (a[i] == '5') {mp[5]++;}
        else if (a[i] == '6') {mp[5]++; mp[3]++;}
        else if (a[i] == '7') {mp[7]++;}
        else if (a[i] == '8') {mp[7]++; mp[2]++; mp[2]++; mp[2]++;}
        else if (a[i] == '9') {mp[7]++; mp[3]++; mp[3]++; mp[2]++;}
    }
    for (int i = 7; i >= 2; i--) {
        while (mp[i]--) {
            cout << i;
        }
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}