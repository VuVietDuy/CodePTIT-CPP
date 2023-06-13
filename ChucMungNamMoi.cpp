#include<iostream>
#include<set>

using namespace std;

int main() {
	int t;
	cin >> t;
	set<int> s;
	for(int i=0 ; i<t ; i++) {
		int k;
		cin >> k;
		s.insert(k);
	}
	for(int x : s) {
		cout << x << " ";
	}
	
}

