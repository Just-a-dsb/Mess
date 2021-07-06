#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
long long p (int x){
    if(x == 0)
        return 1;
    if(x == 1)
        return 2;
    return p(x - 1) * 2;  
}
int main(){
    int n;
    cin >> n;
    cout<< p(n);
}