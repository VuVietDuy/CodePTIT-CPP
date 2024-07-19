#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream file;
    file.open("VANBAN.in");
    string w;
    set<string> words;
    while(file >> w) {
        transform(w.begin(), w.end(), w.begin(), ::tolower);
        words.insert(w);
    }
    for (auto& word : words) {
        cout << word << endl;
    }
    file.close();
}