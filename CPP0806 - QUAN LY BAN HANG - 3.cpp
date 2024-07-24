#include<bits/stdc++.h>
using namespace std;

string genId(string prefix, int i) {
    return prefix + (i < 10 ? "00" : "0") + to_string(i);
}

class Client {
    public:
        string id, name, gender, dob, address;
};

class Product {
    public:
        string id, name, unit;
        int purPrice, price;
};

class Bill {
    public:
        string id;
        Client client;
        Product product;
        int quantity;
    public:
        friend ostream& operator<<(ostream& os, Bill b) {
            os << b.id << " " << b.client.name << " " << b.client.address << " " << b.product.name << " " << b.product.unit << " " << b.product.purPrice << " " << b.product.price << " " << b.quantity << " " << b.product.price * b.quantity;
            return os;
        }
};

int main() {

    fstream kh;
    kh.open("KH.in");
    string skh;
    getline(kh, skh);
    int nkh = stoi(skh);
    vector<Client> clients(nkh);
    map<string, Client> khMap;
    for (int i = 0; i < nkh; i++) {
        clients[i].id = genId("KH", i + 1);
        getline(kh, clients[i].name);
        getline(kh, clients[i].gender);
        getline(kh, clients[i].dob);
        getline(kh, clients[i].address);
        khMap[clients[i].id] = clients[i];
    }
    kh.close();

    fstream mh;
    mh.open("MH.in");
    string smh;
    getline(mh, smh);
    int nmh = stoi(smh);
    vector<Product> products(nmh);
    map<string, Product> mhMap;
    for (int i = 0; i < nmh; i++) {
        products[i].id = genId("MH", i + 1);
        getline(mh, products[i].name);
        getline(mh, products[i].unit);
        string p = "";
        getline(mh, p);
        products[i].purPrice = stoi(p);
        string p2;
        getline(mh, p2);
        products[i].price = stoi(p2);
        mhMap[products[i].id] = products[i];
    }
    mh.close();

    fstream hd;
    hd.open("HD.in");
    string shd;
    getline(hd, shd);
    int nhd = stoi(shd);
    vector<Bill> bills(nhd);
    for (int i = 0; i < nhd; i++) {
        bills[i].id = genId("HD", i + 1);
        string mkh, mmh, qu;
        hd >> mkh >> mmh >> qu;
        bills[i].client = khMap[mkh];
        bills[i].product = mhMap[mmh];
        bills[i].quantity = stoi(qu);
    }
    hd.close();

    for (int i = 0; i < nhd; i++) {
        cout << bills[i] << endl;
    }
}