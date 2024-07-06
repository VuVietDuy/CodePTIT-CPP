#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<string> words;
    while(cin >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        words.push_back(s);
    }
    string email = words.back();
    for(int i = 0; i < words.size() - 1; i++) {
        email += words[i][0];
    }
    email += "@ptit.edu.vn";
    cout << email;
    return 0;
}