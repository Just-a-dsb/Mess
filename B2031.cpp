#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double v;
double a,b,c;

double edge(int o,int p,int q,int r){
    return sqrt(   abs(o - q) * abs(o -q)   +  abs(p - r) *  abs(p-r) );
}

int main(){
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >>y1 >>x2 >> y2>>x3>>y3;
    a = edge(x1,y1,x2,y2);
    b = edge(x1,y1,x3,y3);
    c = edge(x3,y3,x2,y2);
    v = (a +b +c) / 2.0;
    printf("%.2f",sqrt(v*(v-a)*(v-b)*(v-c)));
    return 0;
}