#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream in, out;
    in.open("PTIT.in");
    out.open("PTIT.out");
    string s;
    while(getline(in, s)) out << s << endl;
    return 0;
    in.close();
    out.close();
    return 0;
}