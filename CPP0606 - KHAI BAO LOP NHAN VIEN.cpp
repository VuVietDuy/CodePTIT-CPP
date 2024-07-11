#include<bits/stdc++.h>
using namespace std;

class NhanVien {
    private:
        string id, name, gender, dob, address, tax, date;
    public:
        friend istream& operator >> (istream& is, NhanVien& nv) {
            getline(is, nv.name);
            getline(is, nv.gender);
            getline(is, nv.dob);
            getline(is, nv.address);
            getline(is, nv.tax);
            getline(is, nv.date);
            nv.id = "00001";
            return is;
        }
        friend ostream& operator >> (ostream& os, const NhanVien nv) {
            os << nv.id << " " << nv.name << " " << nv.gender << " " << nv.dob << " " << nv.address << " " << nv.tax << " " << nv.date << " ";
            return os;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}