#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
bool prime[100000001];
void is_prime(int p) {
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    int n=sqrt(p);
    for (int i = 2;i <= n;i++) {
        if (prime[i]) {
            for(int j = 2;j <= p / i;j++){
                prime[i * j] = false;
            }
        }
    }
}
bool is_palindrome(int p){
    int temp = p,ans = 0;
    while (temp != 0) {
        ans = ans * 10 + temp % 10;
        temp /= 10;
    }
    if(ans == p){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    if(b>=10000000){
        b = 9999999;
    }
    if(a>b){
        return 0;
    }
    if(a%2 == 0){
        a++;
    }
    is_prime(b);
    for(int k = a;k <= b;k+=2){
        if(prime[k] == true && is_palindrome(k) == true){
            cout<<k<<endl;
        }
    }
    return 0;
}