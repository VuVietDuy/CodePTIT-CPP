#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        string hoTen, maSinhVien, ngaySinh, lop;
        float gpa;
    public:
        SinhVien() {
            hoTen = "";
            maSinhVien = "";
            ngaySinh = "";
            lop = "";
            gpa = 0;
        }
        friend istream& operator >> (istream& is, SinhVien& sv) {
            getline(is, sv.hoTen);
            is >> sv.lop >> sv.ngaySinh >> sv.gpa;
            sv.maSinhVien = "B20DCCN001";
            for (int i = 1; i < sv.hoTen.length(); i++) {
                if(sv.hoTen[i - 1] == ' ' && sv.hoTen[i] != ' ') {
                    sv.hoTen[i] = toupper(sv.hoTen[i]);
                } else {
                    sv.hoTen[i] = tolower(sv.hoTen[i]);
                }
            }
            if(sv.ngaySinh[1] == '/') sv.ngaySinh.insert(0, "0");
            if(sv.ngaySinh[4] == '/') sv.ngaySinh.insert(3, "0");
            return is;
        }
        friend ostream& operator << (ostream& os, const SinhVien sv) {
            cout << sv.maSinhVien << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.gpa;
            return os;
        }
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}