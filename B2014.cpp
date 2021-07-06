#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
const double pi = 3.14159;
int main(){
    double r;
    cin>>r;
    printf("%.4f %.4f %.4f",2.0 * r ,2.0 * pi *r ,r *r *pi);
    return 0;
}