#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point{
    double x;
	double y;

} Point;

void input(struct Point &A) {
	cin >> A.x;
	cin >> A.y;
}

double distance(struct Point &A,struct Point &B) {
	return A.x + B.x;
}
int main(){
    struct Point A, B;
    int t;
	auto a = 3;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << distance(A,B) << endl;
    }
    return 0;
}