#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t++) {
		int n;
		cin >> n;
		int arr[n+1];
		int m=n;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		for(int i=n-1; i>0; i--) {
			if(arr[i]<arr[i-1]) {
				int k=arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = k;
				m=i+1;
				break;
			}
		}
		for(int i=0; i<m; i++) {
			cout << arr[i] << " ";
		}
		for(int i=n-1; i>=m; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}
