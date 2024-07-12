#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
    string id, name, _class, dob;
    float gpa;
};

string genId(int i) {
    string id = to_string(i);
    while(id.length() < 3) 
        id = "0" + id;
    id = "B20DCCN" + id;
    return id;
}

void nhap(struct SinhVien ds[], int N){
    cin.ignore();
    for(int i = 1; i <= N; i++){
        ds[i].id = genId(i);
        string name;
        getline(cin, name);
        stringstream ss(name);
        string w;
        ds[i].name = "";
        while(ss >> w) {
            string tmp = "";
            for (int j = 0; j < w.length(); j++) {
                if (j == 0) tmp += toupper(w[j]);
                else tmp += tolower(w[j]);
            }
            ds[i].name += tmp + " ";
        }
        getline(cin, ds[i]._class);
        getline(cin, ds[i].dob);
        cin >> ds[i].gpa;
        cin.ignore();
        if(ds[i].dob[1] == '/') ds[i].dob.insert(0, "0");
        if(ds[i].dob[4] == '/') ds[i].dob.insert(3, "0");
    }
}

void in(struct SinhVien ds[], int N){
    for(int i = 1; i <= N; i++){
        cout << ds[i].id << " " << ds[i].name << ds[i]._class << " " << ds[i].dob << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}