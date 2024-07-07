#include<bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string fullName;
    string dateOfBirth;
    float fi, se, th;
};

void nhap(struct ThiSinh &A){
    getline(cin, A.fullName);
    getline(cin, A.dateOfBirth);
    cin >> A.fi >> A.se >> A.th;
}

void in(struct ThiSinh A){
    cout << A.fullName << " " << A.dateOfBirth << " ";
    cout << fixed << setprecision(1) << (A.fi + A.se + A.th);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}