#include<iostream>
using namespace std;
int a,s, b , n;
int f(int x){
    if(x == 1)
        return a;
    if(x == 2)
        return b;
    return f(x - 1) + s;
}
int main(){
    cin >> a >> b >> n;
    s = b -a;
    cout<< f(n);
    return 0;
}