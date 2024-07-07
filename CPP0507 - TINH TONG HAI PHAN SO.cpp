#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

void nhap(struct PhanSo &p) {
    cin >> p.tu >> p.mau;
}

void in(struct PhanSo p) {
    cout << p.tu << "/" << p.mau << endl;
}

PhanSo tong(struct PhanSo p, struct PhanSo q) {
    PhanSo kq;
    kq.tu = p.tu * q.mau + q.tu * p.mau;
    kq.mau = p.mau * q.mau;
    long long uc = abs(__gcd(kq.tu, kq.mau));
    kq.tu /= uc;
    kq.mau /= uc;
    return kq;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}