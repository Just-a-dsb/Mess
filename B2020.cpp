#include<iostream>
using namespace std;
int main(){
    long long a[6];
    long long ans = 0;
    for(int i=1;i<=5;i++)
        cin >> a[i];
        for(int i=1;i<=5;i++){
            if(i == 5)
                a[1] += a[i] / 3;
            else    
                a[i+1] += a[i]/3;

            if(i == 1)
                a[5] += a[i] / 3;
            else    
                a[i-1] += a[i]/3;

            ans += a[i] % 3;
            a[i] /= 3;
        }
    for(int i=1;i<=5;i++)
        cout<<a[i]<<" ";
    cout<<"\n"<<ans;
    return 0;
}