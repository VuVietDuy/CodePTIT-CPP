#include<bits/stdc++.h>
using namespace std;

class SinhVien {
    public:
        string maSV;
        string hoTen;
        string lop;
        string ngaySinh;
        float gpa;
    public:
        friend istream& operator >> (istream& is, SinhVien& sv) {
            getline(is, sv.hoTen);
            is >> sv.lop >> sv.ngaySinh >> sv.gpa;
            sv.maSV = "B20DCCN001";
            if(sv.ngaySinh[1] == '/') sv.ngaySinh.insert(0, "0");
            if(sv.ngaySinh[4] == '/') sv.ngaySinh.insert(3, "0");
            return is;
        }
        friend ostream& operator << (ostream& os, const SinhVien sv) {
            os << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.gpa << endl;
            return os;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}