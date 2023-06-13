#include<bits/stdc++.h>
using namespace std;
main() {
	int t;
	cin>>t;
	while (t--) {
		int n,m;
		cin>>n>>m;
		long int A[n][m];
		long int H[n]= {0};
		long int C[m]= {0};
		for (int i=0; i<n; i++) 
			for (int j=0; j<m; j++) cin>>A[i][j];
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (A[i][j]==1) {
					H[i]=1;
					C[j]=1;
				}
			}
		}
		for (int i=0; i<n; i++) {
			if (H[i]==1) {
				for (int j=0; j<m; j++) A[i][j]=1;
			}
		}
		for (int j=0; j<m; j++) {
			if (C[j]==1) {
				for (int i=0; i<n; i++) A[i][j]=1;
			}
		}
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) cout<<A[i][j]<<" ";
			cout<<endl;
		}
	}
}
