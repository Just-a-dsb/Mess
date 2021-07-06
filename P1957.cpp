#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[108];
char t;
char a[100],b[100],c[100],d[100];
int x, y, z;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        memset(b,0,sizeof(b));
        memset(a,0,sizeof(a));
        x = 0;
        cin >> b;
        if(b[0]>='a'&&b[0]<='z'){
            t = b[0];
            cin >> x >> y;
        }
        else{
            sprintf(a,"%s",b);
            sscanf(a, "%d", &x);

            cin >> y;
        }
        memset(s,0,sizeof(s));
        switch(t){
            case 'a':sprintf(s,"%d+%d=%d",x, y, x + y);break;
            case 'b':sprintf(s,"%d-%d=%d",x, y, x - y);break;
            case 'c':sprintf(s,"%d*%d=%d",x, y, x * y);break;
        }
        cout<< s << endl << strlen(s) << endl ;
    }
    return 0;
}