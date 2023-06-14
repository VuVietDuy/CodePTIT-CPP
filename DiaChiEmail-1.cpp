#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	string final = "";
	stringstream ss;
	ss<<str;
	string tmp = "";
	vector<string> v;  
	while(ss>>tmp) {
		v.push_back(tmp);
	}
	final += v[v.size()-1];
	for(int i=0; i<v.size()-1; i++) {
		final += v[i].substr(0, 1);
	}
	transform(final.begin(), final.end(), final.begin(), ::tolower);
	cout<<final<<"@ptit.edu.vn"<<endl;
}

