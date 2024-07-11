#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    if(s > m * 9 || s <= 0) {
        cout << "-1 -1";
        return 0;
    } 

    int amin[m] {};
    amin[0] = 1;
    int smin = 1;
    int aMinIdx = m - 1;
    while (smin != s) {
        if(s - smin >= 8) {
            amin[aMinIdx] = 9;
            smin += 9;
            aMinIdx--;
        } else {
            amin[aMinIdx] += s - smin;
            smin = s;
        }
    }
    for(int i = 0; i < m; i++) {
        cout << amin[i];
    }
    cout << " ";
    int amax[m] {};
    int smax = 0;
    int aMaxIdx = 0;
    while(smax != s) {
        if(s - smax >= 9) {
            amax[aMaxIdx] = 9;
            smax += 9;
            aMaxIdx++;
        } else {
            amax[aMaxIdx] += s - smax;
            smax = s;
        }
    }
    for(int i = 0; i < m; i++) {
        cout << amax[i];
    }
    return 0;
}