#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int e = 0, o = 0, n = 0;
        string s;
        getline(cin, s);
        string w;
        stringstream ss(s);
        while (ss >> w)
        {
            int k = 0;
            for(int i = 0; i < w.length(); i++) {
                k = k * 10 + (w[i] - 48);
            }
            if(k % 2 == 0) e++;
            else o++;
            n ++;
        }
        if((n % 2 == 0 && e > o) || (n % 2 != 0 && o > e)) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}