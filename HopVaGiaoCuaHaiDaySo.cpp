#include<bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;
	while(test--) {
		int n,m;
		cin >> n >> m;
		set<int> s;
		int a[n],b[m];
		for(int i=0; i<n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int i=0; i<m; i++) {
			cin >> b[i];
			s.insert(b[i]);
		}
		cout << s.size() <<"***"<<endl;
		for(int x:s){
			cout << x << "|";
		}
	}
}



