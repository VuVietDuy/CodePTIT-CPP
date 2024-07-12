#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isSmith(int n) {
    if (isPrime(n)) return false;
    int original = n;
    int sumOfDigits = sumDigits(n);
    int sumOfPrimes = 0;
    int i = 2;
    while (n != 1) {
        while (n % i == 0)
        {
            sumOfPrimes += sumDigits(i);
            n /= i;
        }
        i++;
    }
    return sumOfDigits == sumOfPrimes;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isSmith(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}