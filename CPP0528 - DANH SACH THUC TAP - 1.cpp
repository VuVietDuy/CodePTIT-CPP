#include <bits/stdc++.h>
using namespace std;

struct thuctap{ 
    int stt; 
    string masv,ten,lop,email,doanhnghiep; 
}; 

bool cmp(thuctap a,thuctap b){ 
    return a.ten < b.ten; 
} 

int main(){ 
    int n;
    cin >> n; 
    struct thuctap a[n]; 
    for(int i=0;i<n;i++){ 
        cin >> a[i].masv; 
        cin.ignore(); 
        getline(cin,a[i].ten); 
        cin >> a[i].lop >> a[i].email >> a[i].doanhnghiep; 
        a[i].stt=i+1; 
    } 
    sort(a,a+n,cmp); 
    int q; 
    cin >> q; 
    while(q--){ 
        string s; 
        cin >> s; 
        for(int i=0;i<n;i++){ 
            if(s==a[i].doanhnghiep){ 
                cout << a[i].stt << " " << a[i].masv << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << " " << a[i].doanhnghiep << endl; 
            } 
        } 
    } 
}