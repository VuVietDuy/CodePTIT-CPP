#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
    string maNV = "00001", hoTen, ngaySinh, gioiTinh, diaChi, maSoThue, ngayKyHopDong;
};

void nhap(struct NhanVien &nv) {
    getline(cin, nv.hoTen);
    cin >> nv.gioiTinh;
    cin >> nv.ngaySinh;
    cin.ignore();
    getline(cin, nv.diaChi);
    cin >> nv.maSoThue; 
    cin >> nv.ngayKyHopDong;
}

void in(struct NhanVien a) {
    cout << a.maNV << " " << a.hoTen << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKyHopDong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}