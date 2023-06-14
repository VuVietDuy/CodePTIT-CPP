#include<iostream>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int arr[n],i=0;
        while(n--) {
            cin >> arr[i];
            i++;
        }
        int k=0,m=1;
        while(i--) {
            if(arr[k]!=m) {
                cout << m << endl;
                break;
            }
            m++;
            k++;
        }
    }
}
