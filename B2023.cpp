#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char c;
    int i;
    float f;
    double d;
    cin >> c >> i >> f >> d;
    printf("%c %d %.6f %.6lf",c,i,f,d);
    return 0;
}