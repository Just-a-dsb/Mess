#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double a, b;
    cin >> a >> b;
    printf("%.3f",b / a * 100);
    printf("%%");
    return 0;
}