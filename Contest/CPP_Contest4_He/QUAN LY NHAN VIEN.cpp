#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
    string id, name, dob;
    float avg, score;
};

bool cmp(NhanVien a, NhanVien b) {
    if (a.avg > b.avg) return true;
    else if (a.avg == b.avg && a.score > b.score) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<NhanVien> ds(n);
    for (int i = 0; i < n; i++) {
        string m = to_string(i + 1);
        if (i < 9) ds[i].id = "NV00" + m;
        else ds[i].id = "NV0" + m;
        getline(cin, ds[i].name);
        getline(cin, ds[i].dob);
        cin >> ds[i].avg;
        cin >> ds[i].score;
        cin.ignore();
    }
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (ds[i].avg >= 8 && ds[i].score > 90 ) {
            cout << ds[i].id << " " << ds[i].name << " " << ds[i].dob << " " << ds[i].avg << " " << ds[i].score << endl;
        }
    }
}