#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
double ans = -1.0;
int b;
int maxn, minn, sum;
int p[108][108];
double s[108];
int main(){
    int n, m;
    cin >> n >> m;
    b = m - 2;
    for(int i=1;i<=n;i++){
        maxn = -1 ,minn = 114514, sum = 0;
        for(int j=1;j<=m;j++){
            cin >> p[i][j];
            maxn = max(maxn,p[i][j]);
            minn = min(minn,p[i][j]);
            sum += p[i][j];
        }
        sum = sum - maxn - minn;
        s[i] = (sum*1.0 / b*1.0) * 1.0;
        ans = max(ans,s[i]);
    }

    printf("%0.2f",ans);

    return 0;
}