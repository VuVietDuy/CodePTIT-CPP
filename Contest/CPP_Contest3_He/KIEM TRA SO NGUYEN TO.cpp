#include<bits/stdc++.h>
using namespace std;

bool checkN(string K,int N){	
    if(K.length()==N){		
        return true;
    }	
    return false;
}
    
bool checkNT(string K){
    int a = atoi(K.c_str());
    if(a<2){
        return false;	
    }	
    for(int i=2; i<=sqrt(a); i++){		
        if(a%i==0) return false;	
    }	
    return true;
}

bool checkSum(string K){
    int a = atoi(K.c_str());
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    if (checkNT(to_string(sum))) return true;
    return false;
}

bool checkPT(string K){	
    int a = atoi(K.c_str());
    for (int i=0; i<K.length(); i++) {
        if(K[i] != '2' && K[i] != '3' && K[i] != '5' && K[i] != '7' )
            return false;
    }
    return true;
}

int main(){	
    string K;
    int N;
    cin>>K>>N;
    if(checkN(K,N) && checkNT(K) && checkSum(K) && checkPT(K)){		
        cout<<"So thoa man";	
    } else {		
        cout<<"Khong thoa man";	
    }	
    return 0;
}