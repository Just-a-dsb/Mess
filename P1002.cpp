#include<iostream>
#include<cstring>
using namespace std;
long long dp[150][150];
int x, y;
int n, m;
void play(){
    dp[100][100] = 1;
    for(int i=100;i<=n+ 100;i++) {
        for(int j=100;j<=m+100;j++){
            if(dp[i][j] == -1)
                continue;
            if(i == 100){
                if(dp[i][j - 1] != -1){
                dp[i][j] += dp[i][j-1];
                }
                continue;
            }
            if(j==100){
                if(dp[i-1][j] != -1){
                dp[i][j] += dp[i-1][j];
                }
                continue;
            }
            if(dp[i-1][j] != -1){
                dp[i][j] += dp[i-1][j];
            }
            if(dp[i][j - 1] != -1){
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    return;
}
int main(){
    cin >> n >> m;
    cin >> x >> y;
    x += 100;
    y += 100;
    memset(dp,0,sizeof(dp));
{
    dp[x][y] = -1;
    dp[x-1][y-2] = -1;
    dp[x-1][y+2] = -1;
    dp[x-2][y+1] = -1;
    dp[x-2][y-1] = -1;
    dp[x+1][y+2] = -1;
    dp[x+1][y-2] = -1;
    dp[x+2][y-1] = -1;
    dp[x+2][y+1] = -1;
}
    play();
    cout<<dp[100+n][100+m];
    return 0;
}