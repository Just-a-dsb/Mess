#include<iostream>
#include<cstdio>
using namespace std;

int a,b;

bool is_prime(int p){
    if(p == 0 || p == 1){
        return false;
    }
    else {
        for(int i = 2 ;i * i <= p ;i++){
            if(p % i == 0){
                return false;
            }
        }
    }
        return true;
}

int main(){
    int n;
    cin >> n;
    for(int i=4;i<=n;i = i + 2){
        for(int j=2;j<=n;j++){
            if(is_prime(j)&&is_prime(i - j)){
                cout<<i <<"="<<j<<"+"<<i - j<<endl;
                break;
            }
        }
    }
    return 0;
}