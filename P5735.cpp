#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double x[4],y[4];
double ans;

double play(double a,double b,double c,double d){
    return sqrt( pow(c - a,2)  + pow(d - b ,2) );
}

int main(){
    for(int i=1;i<=3;i++){
        cin >> x[i] >> y[i];
    }
    ans = play(x[1],y[1],x[2], y[2]) + play(x[3],y[3],x[2], y[2]) + play(x[1],y[1],x[3], y[3]);
    printf("%.2f",ans);
    return 0;
}