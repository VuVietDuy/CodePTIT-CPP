#include<bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        string maSV;
        string hoTen;
        string lop;
        string ngaySinh;
        float gpa;
    
    public:
        void nhap() {
            this->maSV = "B20DCCN001";
            getline(cin, this->hoTen);
            cin >> this->lop;
            cin >> this->ngaySinh;
            cin >> this->gpa;
            if(this->ngaySinh[1] == '/') this->ngaySinh.insert(0, "0");
            if(this->ngaySinh[4] == '/') this->ngaySinh.insert(3, "0");
        }
        void xuat() {
            cout << this->maSV << " " << this->hoTen << " " << this->lop << " " << this->ngaySinh << " " << fixed << setprecision(2) << this->gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}