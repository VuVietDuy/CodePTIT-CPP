#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void testCase() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "NO" << endl;
        return;
    }
    int fiSum = sumOfDigits(n);
    int seSum = 0;
    int i = 2;
    while (i <= n) {
        while (n % i == 0) {
            seSum += sumOfDigits(i);
            n /= i;
        }
        i++;
    }
    if (fiSum == seSum) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}