#include<iostream>
using namespace std;

int main() {
	int t,n;
	long long k;
	cin >> t;
	while (t--) {
		int sum = 0;
		cin >> n >> k;
		for(int i=1; i<=n; i++) {
			sum += i%k;
		}
		cout << sum << endl;
	}
}
