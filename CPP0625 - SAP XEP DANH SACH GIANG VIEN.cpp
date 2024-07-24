#include<bits/stdc++.h>
using namespace std;

int stt = 1;

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
            stringstream ss2(m);
            gv.major = "";
            while (ss2 >> w) {
                gv.major += toupper(w[0]);
            }
            return is;
        }
        friend ostream& operator << (ostream& os, GiangVien& gv) {
            os << gv.id << " " << gv.fullName << " " << gv.major << endl;
            return os;
        }
};

bool cmp(GiangVien a, GiangVien b) {
    if (a.name != b.name) return a.name < b.name;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<GiangVien> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    sort(ds.begin(), ds.end(), cmp);
    for (auto x : ds) {
        cout << x;
    }
    return 0;
}