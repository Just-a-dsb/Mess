#include<iostream>
using namespace std;
long long n;




int main(){
    cin >> n;
    if( n<0){
        cout<<"negative";
    }
    else if( n == 0){
        cout<<"zero";
    }
    else {
        cout<<"positive";
    }
    return 0;
}