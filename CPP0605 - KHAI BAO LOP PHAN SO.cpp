#include<bits/stdc++.h>
using namespace std;

class PhanSo {
    private:
        long long tu, mau;
    public:
        PhanSo(long long tu, long long mau) : tu(tu), mau(mau) {}
        void rutgon() {
            long long ucln = __gcd(this->tu, this->mau);
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
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}