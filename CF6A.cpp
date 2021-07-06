#include<iostream>
#include<algorithm>
using namespace std;

int tri(int x, int y, int z){
    if(x + y > z && x + z > y && y + z > x){
        return 1;
    }
    else {
        if(x + y == z || y + z == x || x + z == y){
            return 2; 
        }
        else {
            return 3;
        }
    }
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans=4;
    ans=min(ans,tri(a,b,c));
    ans=min(ans,tri(d,b,c));
    ans=min(ans,tri(a,b,d));
    ans=min(ans,tri(a,d,c));
    switch(ans){
        case 1: {cout<<"TRIANGLE";break;}
        case 2: {cout<<"SEGMENT";break;}
        case 3: {cout<<"IMPOSSIBLE";break;}
    }
    return 0;
}