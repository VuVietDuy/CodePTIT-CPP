#include<bits/stdc++.h>

using namespace std;

#define ll long long


int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
public:
    string mkh, tenKH, sex, bd, add;
    friend class HoaDon;
    friend istream &operator >> (istream &is, KhachHang &a)
    {
        ++cntkh;
        if(cntkh < 10) a.mkh = "KH00" + to_string(cntkh);
        else a.mkh = "KH0" + to_string(cntkh);
        scanf("\n");
        getline(is, a.tenKH);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.add);
        KH[a.mkh] = a;
        return is;
    }
};

class MatHang
{
public:
    string mmh, tenMH, dvt;
    ll giaMua, giaBan;
    friend class HoaDon;
    friend istream &operator >> (istream &is, MatHang &a)
    {
        ++cntmh;
        if(cntmh < 10) a.mmh = "MH00" + to_string(cntmh);
        else a.mmh = "MH0" + to_string(cntmh);
        scanf("\n");
        getline(is, a.tenMH);
        getline(is, a.dvt);
        cin >> a.giaMua >> a.giaBan;
        MH[a.mmh] = a;
        return is;
    }
};

class HoaDon
{
public:
    string mhd, mkh, mmh;
    ll sl, loiNhuan;
    friend istream &operator >> (istream &is, HoaDon &a)
    {
        ++cnthd;
        if(cnthd < 10) a.mhd = "HD00" + to_string(cnthd);
        else if(cnthd < 100) a.mhd = "HD0" + to_string(cnthd);
        else a.mhd = "HD" + to_string(cnthd);
        cin >> a.mkh >> a.mmh >> a.sl;
        a.loiNhuan = MH[a.mmh].giaBan * a.sl - MH[a.mmh].giaMua * a.sl;
        return is;
    }
    friend ostream &operator << (ostream &os, HoaDon &a)
    {
        os << a.mhd << ' ' << KH[a.mkh].tenKH << ' ' << KH[a.mkh].add << ' ' << MH[a.mmh].tenMH << ' ' << a.sl << ' ' << MH[a.mmh].giaBan * a.sl << ' ' << a.loiNhuan << endl;
        return os;
    }
};

bool cmp(HoaDon &a, HoaDon &b)
{
    return a.loiNhuan >= b.loiNhuan;
}

void sapxep(HoaDon a[], int n)
{
    sort(a, a + n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}