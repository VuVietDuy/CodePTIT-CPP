#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class NhanVien {
    public:
        string id, name, gender, dob, address, tax, date;
    public:
        friend istream& operator>>(istream& is, NhanVien& nv) {
            cin.ignore();
            getline(is, nv.name);
            cin >> nv.gender >> nv.dob;
            cin.ignore();
            getline(is, nv.address);
            cin >> nv.tax >> nv.date;
            nv.id = to_string(stt);
            while (nv.id.length() < 5) {
                nv.id = "0" + nv.id;
            }
            stt++;
            return is;
        }
        friend ostream& operator<<(ostream& os, NhanVien& nv) {
            os << nv.id << " " << nv.name << " " << nv.gender << " " << nv.dob << " " << nv.address << " " << nv.tax << " " << nv.date << endl;
            return os;
        }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}