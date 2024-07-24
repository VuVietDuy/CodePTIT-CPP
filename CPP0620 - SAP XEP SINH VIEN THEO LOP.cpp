#include<bits/stdc++.h>
using namespace std;

class SinhVien {
    public:
        string id, name, _class, email;
    public:
        SinhVien() {
            id = "";
            name = "";
            _class = "";
            email = "";
        }
        friend istream& operator>> (istream& is, SinhVien& sv) {
            cin >> sv.id;
            cin.ignore();
            getline(cin, sv.name);
            cin >> sv._class >> sv.email;
            return is;
        }
        friend ostream& operator<< (ostream& os, const SinhVien& sv) {
            os << sv.id << " " << sv.name << " " << sv._class << " " << sv.email << endl;
            return os;
        }
};

bool cmp(SinhVien a, SinhVien b) {
    if (a._class != b._class) return a._class < b._class;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; i++) cin >> ds[i];
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < n; i++) cout << ds[i];
}