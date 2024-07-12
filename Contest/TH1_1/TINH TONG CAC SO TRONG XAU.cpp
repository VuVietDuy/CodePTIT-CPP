#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long sum = 0;
        int a = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                a = a * 10 + (s[i] - 48);
            } else {
                sum += a;
                a = 0;
            }
        }
        sum += a;
        cout << sum << endl;
    }
}