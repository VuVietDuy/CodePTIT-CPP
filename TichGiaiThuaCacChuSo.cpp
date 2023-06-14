#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		long long x;
		cin >> n >> x;
		int arr[n];
		int sum = 1;
		int i=0;
		while(x!=0) {
			int a=x%10;
			if(a>1) {
				arr[i] = a;
				i++;
			}
			for (int j=1; j<=a; j++) {
				sum=sum*j;
			}
			x=x/10;
		}
		int b[1000],k=0;
		for(int j=0; j<i; j++) {
			if(arr[j]==4) {b[k]=3;k++;b[k]=2;k++;b[k]=2;k++;}
			if(arr[j]==6) {b[k]=3;k++;b[k]=5;k++;}
			if(arr[j]==8) {b[k]=2;k++;b[k]=7;k++;b[k]=2;k++;b[k]=2;k++;}
			if(arr[j]==2 || arr[j]==3 || arr[j]==5 || arr[j]==7 ) {
				b[k]=arr[j];k++;
			}
			if(arr[j]==9) {
				b[k]=7;k++;
				b[k]=3;k++;
				b[k]=3;k++;
				b[k]=2;k++;
			}
		}
		sort(b,b+k);
		for(int j=k-1;j>=0;j--) {
			cout << b[j];
		}
		cout << endl;
	}
	return 0;
}
