#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double f(double a,double b){
    if(b == 1)
        return a / (b + a);
    else{
        return a / (b + f(a, b - 1));
    }
}
int main(){
    double x, n;
    cin >>x >> n;
    printf("%.2f",f(x,n));
    return 0;
}