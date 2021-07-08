#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<ctime>
#include<queue>
#include<cmath>
#include<cstdio>
using namespace std;

bool y[10000008];
bool ed[10000008];
long long fun[10000008];
long long ans=0; 

inline long long f(long long k){
    if(ed[k] == true){
        return fun[k];
    }

    if(k <= 2){
        ed[k] = true;
        return fun[k] = k;
    }
    else { 
        ed[k] = true;
        return fun[k] = f(k - 1) + f(k - 2);
    }
}

string bit(long long x){
    string str = "";
    while(x) {
        if(x % 2 == 0){
            str = "0" + str; 
        }
        else    
            str = "1" +str;
        x /= 2;
    }
    return str;
}

signed main() {
    long long n, sum = 0;
    cin >> n;

    for(long long i=1;;i++){
        sum = 0;
        string bir = bit(i);
        for(long long j=bir.length() - 1,k=1;j>=0;j--,k++) {
            sum += (bir[j] - 48) * f(k);
        }
        if(sum == n){
            cout<<i;
            return 0;
        }
    }



    return 0;
}