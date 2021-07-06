#include<iostream>
#include<algorithm>
using namespace std;
int a[20000080];
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    sort(a,a + m);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}