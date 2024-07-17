#include<bits/stdc++.h>
using namespace std;

void testCase() {
    int c;
    cin >> c;
    cin.ignore();
    string s, w;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    while (ss >> w) {
        w[0] = toupper(w[0]);
        for (int i = 1; i < w.length(); i++) {
            w[i] = tolower(w[i]);
        }
        v.push_back(w);
    }
    if (c == 1) {
        cout << v[v.size() - 1] << " ";
        for (int i = 0; i < v.size() - 1; i++) {
            cout << v[i] << " ";
        }
    } else {
        for (int i = 1; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << v[0];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}