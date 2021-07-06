#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
    int var = 20;
    int *ip;
    ip =&var;
    cout<< *ip;
    system("pause");
    return 0;
}