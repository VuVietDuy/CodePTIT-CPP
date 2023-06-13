#include <iostream>
#include <iomanip>
using namespace std;

struct ThiSinh {
	string hoTen;
	string ngaySinh;
	double diemMon1;
	double diemMon2;
	double diemMon3;
};

void nhap(struct ThiSinh &a) {
	getline(cin,a.hoTen);
	cin >> a.ngaySinh;
	cin >> a.diemMon1;
	cin >> a.diemMon2;
	cin >> a.diemMon3;	
}

void in(struct ThiSinh &a) {
	cout << a.hoTen << " ";
	cout << a.ngaySinh << " ";
	cout  << setprecision(1) << fixed << a.diemMon1 + a.diemMon2 + a.diemMon3 << " ";
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}