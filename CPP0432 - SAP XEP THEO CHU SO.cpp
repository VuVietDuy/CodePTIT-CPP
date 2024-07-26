#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}


void testCase() {
    int n;
    cin >> n;
    vector<string> a;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a.push_back(to_string(k));
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}