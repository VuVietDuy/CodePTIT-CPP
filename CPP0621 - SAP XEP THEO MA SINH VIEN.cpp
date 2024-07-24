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
    return a.id < b.id;
}

int main() {
    SinhVien sv;
    vector<SinhVien> ds;
    while (cin >> sv) {
        ds.push_back(sv);
    }
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < ds.size(); i++) cout << ds[i];
}