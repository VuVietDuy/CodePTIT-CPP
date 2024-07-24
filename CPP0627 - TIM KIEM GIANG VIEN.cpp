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

string lowerString(string s) {
    string res = "";
    for (char c : s) {
        if (isalpha(c)) {
            res += tolower(c);
        }
    }
    return res;
}

class GiangVien {
    public:
        string id, fullName, name, major, searchString;
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
            gv.searchString = lowerString(gv.fullName);
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
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << filter << ":" << endl;
        filter = lowerString(filter);
        for (auto x : ds) {
            if (x.searchString.find(filter) != -1) {
                cout << x;
            }
        }
    }
    return 0;
}