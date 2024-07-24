#include<bits/stdc++.h>
using namespace std;

int c = 0;

class SinhVien {
    private:
        string id, name, _class, dob;
        float gpa;
    public:
        SinhVien() {
            id = name = _class = dob = "";
            gpa = 0;
        }
        friend istream &operator >>  (istream &is, SinhVien &sv) {
            is.ignore();
            getline(is, sv.name);
            getline(is, sv._class);
            getline(is, sv.dob);
            is >> sv.gpa;
            if (sv.dob[1] == '/') sv.dob.insert(0, "0");
            if (sv.dob[4] == '/') sv.dob.insert(3, "0");
            c++;
            sv.id = "B20DCCN";
            sv.id += "0";
            if (c < 10) sv.id += "0";
            sv.id += to_string(c);
            return is;
        }
        friend ostream &operator << (ostream &os, SinhVien sv) {
            os << sv.id << " " << sv.name << " " << sv._class << " " << sv.dob << " " << fixed << setprecision(2) << sv.gpa << endl;
            return os;
        }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}