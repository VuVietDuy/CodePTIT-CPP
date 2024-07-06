#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<string> v;
    getline(cin, s);
    string w;
    stringstream ss(s);
    while(ss >> w) {
        w[0] = toupper(w[0]); 
        transform(w.begin() + 1, w.end(), w.begin() + 1, ::tolower);
        v.push_back(w);
    }
    transform(v.back().begin(), v.back().end(), v.back().begin(), ::toupper);
    for(int i = 0; i < v.size(); i++) {
        if (i == v.size() - 2) {
            cout << v[i] << ", ";
        } else {
            cout << v[i] << " ";
        }
    }
}