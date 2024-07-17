#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long X, Y, Z, N;
        cin >> X >> Y >> Z >> N;
        long long lcmXYZ = lcm(lcm(X, Y), Z);
        
        long long minn = pow(10, N - 1);
        long long maxn = pow(10, N) - 1;
        
        if (minn % lcmXYZ == 0) {
            cout << minn << endl;
        } else {
            long long result = ((minn / lcmXYZ) + 1) * lcmXYZ;
            if (result <= maxn) {
                cout << result << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    
    return 0;
}
