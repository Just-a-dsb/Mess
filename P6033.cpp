#include<cstdio>
#include<queue>
#include<iostream>
#define int long long
using namespace std;
int g[100008];
queue<int> q;
queue<int> r;
void read(int &x){ 
	int f=1;x=0;
    char s=getchar();
	while(s<'0'||s>'9')
    {
        if(s == '-')
            f=-1;
        s=getchar();
    }
	while(s >= '0' && s <= '9')
    {
        x=x * 10 + s - '0';
        s=getchar();}
	x*=f;
}
signed main(){
    int n, a, ans=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        read(a);
        g[a]++;
    }
    for(int i=1;i<=100000;i++){
        while(g[i]){
            g[i]--;
            q.push(i);
        }
    }
    for(int i=1;i < n;i++){
        int x, y;
        if(q.front() < r.front() && !q.empty() || r.empty()){
            x = q.front();
            q.pop();
        }
        else{
            x = r.front();
            r.pop();
        }
        if(q.front() < r.front() && !q.empty() || r.empty()){
            y = q.front();
            q.pop();
        }
        else {
            y = r.front();
            r.pop();
        }
        ans += (x + y);
        r.push(x + y);
    }
    cout<< ans;
    return 0;
}