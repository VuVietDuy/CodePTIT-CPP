#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

PhanSo rutgon(PhanSo p) {
    long long gcd = abs(__gcd(p.tu, p.mau));
    return {p.tu / gcd, p.mau / gcd};
}

void process(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = (a.tu * b.mau) + (b.tu * a.mau);
    c.mau = a.mau * b.mau;
    c.tu = c.tu * c.tu;
    c.mau = c.mau * c.mau;
    c = rutgon(c);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    d = rutgon(d);
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}