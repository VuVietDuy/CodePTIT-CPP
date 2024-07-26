
// https://code.ptit.edu.vn/student/question/CPP0223
// MA TRẬN XOẮN ỐC - 1

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int d = 0;
    int up = 0, down = n - 1;
    int left = 0, right = m - 1;
    vector<int> res;
    while (1) {
        for (int i = left; i <= right; ++i) {
            res.push_back(a[up][i]);
            d++;
        }
        up++;
        if (d == n * m) break;

        for (int i = up; i <= down; ++i) {
            res.push_back(a[i][right]);
            d++;
        }
        right--;
        if (d == n * m) break;

        for (int i = right; i >= left; --i) {
            res.push_back(a[down][i]);
            d++;
        }
        down--;
        if (d == n * m) break;

        for (int i = down; i >= up; --i) {
            res.push_back(a[i][left]);
            d++;
        }
        left++;
        if (d == n * m) break;
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}
