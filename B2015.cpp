#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double r1 , r2;
    cin >> r1 >> r2 ;
    printf("%.2f",1.0 / (1.0/r1 + 1.0/r2));
    return 0;
}