#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string stt;
	string name;
	string id;
	string birh;
	float gpa;
};
void nhap(struct SinhVien sv[], int n) {
	for(int i=1; i<=n; i++){
		cin.ignore();
		if(i<10) {
			sv[i].stt = "B20DCCN00" + to_string(i);
		}
		else
		{
			sv[i].stt = "B20DCCN0" + to_string(i);
		}
		getline(cin,sv[i].name);
		cin >> sv[i].id;
		cin >> sv[i].birh;
		cin >> sv[i].gpa;
	}
}
string solve(string b) {
	if(b[0] !='0' && b[1]=='/') {
		b ='0' + b;
	}
	if(b[3] !='0' && b[4]=='/') {
		b.insert(b.begin()+3,'0');
	}
	return b;
}
void in(struct SinhVien sv[], int n) {
	for(int i=1; i<=n; i++) {
		cout << sv[i].stt << " "; 
		cout << sv[i].name << " "; 
		cout << sv[i].id << " "; 
		cout << solve(sv[i].birh) << " "; 
		cout << setprecision(2) << fixed << sv[i].gpa << endl;
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
