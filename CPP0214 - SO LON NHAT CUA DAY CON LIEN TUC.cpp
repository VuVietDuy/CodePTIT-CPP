#include<bits/stdc++.h>
using namespace std;

struct P {
    int idx, val;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        deque<P> dq;
        for (int i = 0; i < n; i++) {
            while (!dq.empty() && dq.back().val < a[i]) {
                dq.pop_back();
            }
            P p;
            p.idx = i;
            p.val = a[i];
            dq.push_back(p);
            if (i + 1 >= k) {
                cout << dq.front().val << " ";
                if (dq.front().idx == i - k + 1) {
                    dq.pop_front();
                }
            }
        }
        cout << endl;
    }
}