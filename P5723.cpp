#include<iostream>
#include<algorithm>
using namespace std;
bool is_prime(int p){
    bool flag = true;
    if(p == 0 || p == 1){
        return false;
    }
    else {
        for(int i = 2 ;i * i <= p ;i++){
            if(p % i == 0){
                flag = false;
                break;
            }
        }
    }
    if(flag){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int ans = 0;
    int l;
    cin >> l;
    for(int j=2;;j++){
        if(is_prime(j)){
            if(l - j >= 0){
                cout<<j<<endl;
                ans++;
                l -= j;
            }
            else{
                break;
            }
        }
    }
    cout<< ans;
    return 0;
}