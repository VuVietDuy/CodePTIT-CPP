#include<bits/stdc++.h>
using namespace std;

int main() {
    int fi[] = { 'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    int se[] = { 'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

    int t;
    cin >> t;
    while(t--) {
        int n;
        double score = 0;
        cin >> n;
        if(n == 101) {
            for (int i = 0; i < 15; i++) {
                char c;
                cin >> c;
                if (c == fi[i]) {
                    score += 10.0/15;
                }
            }
            
        } else if(n == 102) {
            for (int i = 0; i < 15; i++) {
                char c;
                cin >> c;
                if (c == se[i]) {
                    score += 10.0/15;
                }
            }
            
        }
        cout << fixed << setprecision(2) << score << endl;
    }
}