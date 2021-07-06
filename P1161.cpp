#include<iostream>
using namespace std;
int b[2000008];
double a,t;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> t;
        for(double j=1;j<=t;++j){
            if(b[int(j*a)]==0)  
                b[int(j*a)]=1;
            else 
            {
                 b[int(j*a)]=0;
            }
        }
    }
    for(int i=1;;i++){
        if(b[i] == 1 ){
            cout<<i;
            break;
        }
    }
    return 0;
}