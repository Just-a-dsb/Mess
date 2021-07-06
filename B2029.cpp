#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const double pi = acos(-1.0);
int main(){
    double h, r;
    cin >> h >>r;
    double w = h * (r *r *pi);
    w /= 1000;
    cout<<ceil(20.0/w);
    return 0;
}