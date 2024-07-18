#include<bits/stdc++.h>
using namespace std;

struct Person {
    string name, dob;
    int d, m, y;
};

bool cmp(Person a, Person b) {
    if (a.y > b.y) return true;
    if (a.y == b.y && a.m > b.m) return true;
    if (a.y == b.y && a.m == b.m && a.d > b.d) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<Person> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].dob;
        stringstream ss(p[i].dob);
        string token;
        getline(ss, token, '/');
        p[i].d = stoi(token);
        getline(ss, token, '/');
        p[i].m = stoi(token);
        getline(ss, token);
        p[i].y = stoi(token);
    }
    sort(p.begin(), p.end(), cmp);
    cout << p[0].name << endl << p[n - 1].name << endl;
}