#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double a, b;
    a = abs(x1 - x2);
    b = abs(y1 - y2);
    printf("%.3f",sqrt(a*a+b*b));
    return 0;
}