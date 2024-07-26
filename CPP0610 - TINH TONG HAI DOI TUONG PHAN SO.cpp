#include<bits/stdc++.h>
using namespace std;

class PhanSo {
    public:
        long tu, mau;
    public:
        PhanSo(long tu, long mau) {
            this->tu = tu;
            this->mau = mau;
        }
        void rutgon() {
            long ucln = abs(__gcd(this->tu, this->mau));
            this->tu /= ucln;
            this->mau /= ucln;
        }
        friend istream& operator >> (istream& is, PhanSo& p) {
            is >> p.tu >> p.mau;
            return is;
        }
        friend ostream& operator << (ostream& os, const PhanSo& p) {
            os << p.tu << "/" << p.mau;
            return os;
        }
        friend PhanSo operator + (const PhanSo& a, const PhanSo& b) {
            long tu = a.tu * b.mau + a.mau * b.tu;
            long mau = a.mau * b.mau;
            PhanSo res(tu, mau);
            res.rutgon();
            return res;
        }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}