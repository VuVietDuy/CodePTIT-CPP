#include<bits/stdc++.h>
using namespace std;

struct Product {
    int id;
    string name, category;
    float purPrice, price, profit;
};

bool cmp(Product a, Product b) {
    return a.profit > b.profit;
}

int main() {
    int n;
    cin >> n;
    vector<Product> p(n);
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cin.ignore();  // to ignore the newline character before getting name
        getline(cin, p[i].name);
        getline(cin, p[i].category);
        cin >> p[i].purPrice >> p[i].price;
        p[i].profit = p[i].price - p[i].purPrice;
    }
    sort(p.begin(), p.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << p[i].id << " " << p[i].name << " " << p[i].category << " " << fixed << setprecision(2) << p[i].profit << endl;
    }
}