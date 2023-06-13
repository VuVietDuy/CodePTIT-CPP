#include<iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
	string maSinhVien;
	string hoTen;
	string lop;
	string ngaySinh;
	float gpa;
	string solve() {
		if(ngaySinh[0] != '0' && ngaySinh[1] == '/')
			ngaySinh.insert(ngaySinh.begin(), '0');
		if(ngaySinh[3] != '0' && ngaySinh[4] == '/')
			ngaySinh.insert(ngaySinh.begin() + 3, '0');
		return ngaySinh;
	}
};

void nhap(struct SinhVien& x) {
	x.maSinhVien = "B20DCCN001";
	getline(cin,x.hoTen);
	cin >> x.lop;
	cin >> x.ngaySinh;
	cin >> x.gpa;
}

void in(struct SinhVien& x) {
	cout << x.maSinhVien << " " << x.hoTen << " " << x.lop << " " << x.solve() << " " << setprecision(2) << fixed << x.gpa;

}
int main() {
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}