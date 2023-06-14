#include <iostream>
using namespace std;

int main() {
	short t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int cnt = 1;
		if(n % 2 != 0) {
			cout << 0 << endl;
			continue;
		}
		if((n/2)%2!=0) {
			cout << 2 << endl;
			continue;
		} 
		
			for(int i = 2; i <= n/2; i=i+2) {
				if(n % i == 0)
					cnt++;
			}

			cout << cnt << endl;
	}
}

