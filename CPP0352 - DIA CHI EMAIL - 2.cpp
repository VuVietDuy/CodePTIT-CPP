#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            words.push_back(word);
        }
        string email = words[words.size() - 1];
        for (int i = 0; i < words.size() - 1; ++i) {
            email += words[i][0];
        }
        mp[email]++;
        if (mp[email] > 1) {
            email += to_string(mp[email]);
        }
        
        cout << email << "@ptit.edu.vn" << endl;
    }
}