#include<bits/stdc++.h>
using namespace std;

class Point {
private:
    long x, y, z;
public:
    Point() {}
    friend istream& operator >> (istream& is, Point& p) {
        is >> p.x >> p.y >> p.z;
        return is;
    } 
    friend double operator - (Point& a, Point& b) {
        double x = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
        return (round(x * 100)) / 100;
    }
};

int main(){
	int t;
	cin>>t;
	while(t--){
		Point A;
		Point B;
		cin>>A>>B;
		cout<<setprecision(2)<<fixed<<A-B<<endl;
	}
	return 0;
}