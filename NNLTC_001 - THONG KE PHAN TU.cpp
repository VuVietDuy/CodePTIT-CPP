#include<bits/stdc++.h>
using namespace std;

const int MAXLIST = 10000;

typedef struct list{
    int n; 
    int nodes[MAXLIST];
};

int main(){
    int n;
    map<int, int> mp;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] > 0) {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    } 
}