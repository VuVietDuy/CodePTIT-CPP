#include<bits/stdc++.h>
using namespace std;

int stt = 1;

string solve(string s) {
    stringstream ss(s);
    string res = "", w;
    while (ss >> w) {
        res += toupper(w[0]);
    }
    return res;
}

class GiangVien {
    public:
        string id, fullName, name, major;
    public:
        friend istream& operator >> (istream& is, GiangVien& gv) {
            string f, m, w;
            getline(is, f);
            getline(is, m);
            gv.fullName = f;
            stringstream ss(f);
            while (ss >> w) {
                gv.name = w;
            }
            gv.id = "GV";
            if (stt < 10) {
                gv.id += "0";
            }
            gv.id += to_string(stt);
            stt++;
            gv.major = solve(m);
            return is;
        }
        friend ostream& operator << (ostream& os, GiangVien& gv) {
            os << gv.id << " " << gv.fullName << " " << gv.major << endl;
            return os;
        }
};


int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<GiangVien> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        string filter;
        getline(cin, filter);
        filter = solve(filter);
        cout << "DANH SACH GIANG VIEN BO MON " << filter << ":" << endl;
        for (auto x : ds) {
            if (x.major == filter) {
                cout << x;
            }
        }
    }
    return 0;
}