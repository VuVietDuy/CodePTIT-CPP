#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
    string id, name, gender, dob, address, tax, date;
    int d, m, y;
};

int stt = 1;

void nhap(struct NhanVien& nv) {

    cin.ignore();
    getline(cin, nv.name);
    getline(cin, nv.gender);
    getline(cin, nv.dob);
    getline(cin, nv.address);
    cin >> nv.tax >> nv.date;
    nv.d = stoi(nv.dob.substr(0, 2));
    nv.m = stoi(nv.dob.substr(3, 2));
    nv.y = stoi(nv.dob.substr(6, 4));
    nv.id = to_string(stt);
    while (nv.id.length() < 5) {
        nv.id = "0" + nv.id;
    }
    stt++;
}

bool cmp(struct NhanVien a, struct NhanVien b) {
    if (a.y < b.y) return true;
    if (a.y == b.y && a.m < b.m) return true;
    if (a.y == b.y && a.m == b.m && a.d < b.d) return true;
    return false;
}

void sapxep(struct NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void inds(struct NhanVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}