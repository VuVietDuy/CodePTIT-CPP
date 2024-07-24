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
            os << sv.id << " " << sv.name << " " << sv._class << " " << sv.email;
            return os;
        }
};

int main() {
    int n;
    cin >> n;
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; i++) cin >> ds[i];
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string filter;
        getline(cin, filter);
        transform(filter.begin(), filter.end(), filter.begin(), ::toupper);
        map<string, string> f;
        f["KE TOAN"] = "DCKT";
        f["CONG NGHE THONG TIN"] = "DCCN";
        f["AN TOAN THONG TIN"] = "DCAT";
        f["VIEN THONG"] = "DCVT";
        f["DIEN TU"] = "DCDT";
        cout << "DANH SACH SINH VIEN NGANH " << filter << ":" << endl;
        for (int i = 0; i < n; i++) {
            if ((f[filter] == "DCCN" || f[filter] == "DCAT") && ds[i]._class[0] == 'E') continue;
            if (ds[i].id.substr(3, 4) == f[filter]) {
                cout << ds[i] << endl;
            }
        }
    }
}