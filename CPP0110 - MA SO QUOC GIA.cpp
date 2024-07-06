#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int k = str.find("084");
        str.erase(k, 3);
        cout << str << endl;
    }
}