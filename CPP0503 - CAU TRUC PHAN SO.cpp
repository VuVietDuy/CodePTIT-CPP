#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

void nhap(struct PhanSo &p) {
    cin >> p.tu >> p.mau;
}

void rutgon(struct PhanSo &p) {
    long long ucln = abs(__gcd(p.tu, p.mau));
    p.tu /= ucln;
    p.mau /= ucln;
}

void in(struct PhanSo p) {
    cout << p.tu << "/" << p.mau << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}