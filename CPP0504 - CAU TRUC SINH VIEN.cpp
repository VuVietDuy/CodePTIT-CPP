#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
    string id = "B20DCCN001", name, _class, dateOfBirth;
    float gpa;
};

void nhap(struct SinhVien &s) {
    getline(cin, s.name);
    string date;
    cin >> s._class >> date >> s.gpa;
    if(date[1] == '/') {
        date.insert(0, "0");
    }
    if(date[4] == '/') {
        date.insert(3, "0");
    }
    s.dateOfBirth = date;
}

void in(struct SinhVien s) {
    cout << s.id << " " << s.name <<  " " << s._class << " " << s.dateOfBirth << " ";
    cout << fixed << setprecision(2) << s.gpa;
}


int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}