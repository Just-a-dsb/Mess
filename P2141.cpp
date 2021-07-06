#include<iostream>
using namespace std;
int a[108];
bool b[108];
int main()
{
    int n;
    int ans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            for(int k=j+1;k<=n;k++){
                if(a[j] + a[k] == a[i]){
                    b[i] = true;
                }
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        if(b[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}