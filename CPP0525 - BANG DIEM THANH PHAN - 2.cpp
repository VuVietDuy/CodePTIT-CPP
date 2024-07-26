#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
    string id, name, _class;
    float fi, se, th;
};

bool cmp(SinhVien a, SinhVien b) {
    return a.name < b.name;
}

void nhap(struct SinhVien &sv) {
    cin.ignore();
    getline(cin, sv.id);
    getline(cin, sv.name);
    getline(cin, sv._class);
    cin >> sv.fi >> sv.se >> sv.th;
}

void sap_xep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " " << ds[i].id << " " << ds[i].name << " " << ds[i]._class << " " << fixed << setprecision(1) << ds[i].fi << " " << ds[i].se << " " << ds[i].th << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}