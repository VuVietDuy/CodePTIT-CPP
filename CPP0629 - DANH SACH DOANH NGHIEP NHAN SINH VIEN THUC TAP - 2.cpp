#include<bits/stdc++.h>
using namespace std;

class ThucTap {
    public:
        string id, name;
        int q;
    public:
        ThucTap() {
            id = "";
            name = "";
            q = 0;
        }
        friend istream& operator >> (istream& is, ThucTap& tt) {
            is >> tt.id;
            is.ignore();
            getline(is, tt.name);
            cin >> tt.q;
            return is;
        }
        friend ostream& operator << (ostream& os, const ThucTap& tt) {
            os << tt.id << " " << tt.name << " " << tt.q;
            return os;
        }
};

bool cmp(const ThucTap& a, const ThucTap& b) {
    if (a.q != b.q) return a.q > b.q;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;
    vector<ThucTap> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    int q, a, b;
    cin >> q;
    while (q--) {
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for (int i = 0; i < n; i++) {
            if (v[i].q >= a && v[i].q <= b)
                cout << v[i] << endl;
        }
    }
    return 0;
}