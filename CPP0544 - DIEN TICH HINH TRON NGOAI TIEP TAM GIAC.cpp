#include<bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238

struct Point {
    double x, y;
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        Point A, B, C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        
        double AB = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
        double BC = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y));
        double AC = sqrt((C.x - A.x) * (C.x - A.x) + (C.y - A.y) * (C.y - A.y));
        if (AB + BC <= AC || AB + AC <= BC || BC + AC <= AB) {
            cout << "INVALID" << endl;
            continue;
        }
        double P = (AB + BC + AC) / 2;
        double S = sqrt(P * (P - AB) * (P - BC) * (P - AC));
        double R = (AB * BC * AC) / (4 * S);
        double Sc = PI * R * R;
        cout << fixed << setprecision(3) << Sc << endl;
    }
}