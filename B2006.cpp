#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    double x, a , y  ,b;
    cin >> x >> a >> y >> b;
    double z;
    double n, s;
    s = (x * a - y * b) / (a - b);
    printf("%.2f",s);
    return 0;
}