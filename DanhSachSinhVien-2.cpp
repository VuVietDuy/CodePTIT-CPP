#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main() {
	string s = "vu viEt dUy";
	for(int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    
    string tmp, res = "";
    stringstream ss(s);
    cout << ss;
    while(ss >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        res += tmp;
        res += ' ';
    }
    cout << res;
}
