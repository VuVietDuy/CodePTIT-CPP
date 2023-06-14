#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();
	while(test--) {
		string a;
		getline(cin,a);
		stringstream ss;
		ss << a;
		cout << ss;
	}
}
