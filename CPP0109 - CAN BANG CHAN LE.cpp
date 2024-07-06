#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0;
    for(int i = pow(10,n-1); i < pow(10,n); i ++) {
        int count = 0;
        int k = i;
        while(k > 0) {
            if(k % 2 == 0) count++;
            else count--;
            k = k / 10;
        }
        if (count == 0) {
            cout << i << " ";
            m ++;
            if(m % 10 == 0) cout << endl;
        }
    }
}