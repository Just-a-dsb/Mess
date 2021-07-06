#include<iostream>
#include<cstdlib>
using namespace std;
 int n;
char b[14][14],f[14][14];
char a[14][14];char t[14][14];

void d90(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = b[n - j + 1][i];
        }
    }
    return;
}
void d180(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = b[n - i + 1][n - j + 1];
        }
    }
    return;
}
void d270(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = b[j][n - i + 1];
        }
    }
    return;
}
void turn(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = b[i][n - j + 1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            t[i][j] = a[i][j];
        }
    }
    return;
}

void t90(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = t[n - j + 1][i];
        }
    }
    return;
}
void t180(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = t[n - i + 1][n - j + 1];
        }
    }
    return;
}
void t270(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j] = t[j][n - i + 1];
        }
    }
    return;
}


bool compare(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j] != f[i][j]){
                return false;
            }
        }
    }
    return true;
}

bool no_change(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(b[i][j] != f[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> b[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> f[i][j];
        }
    }

    d90();
    if(compare() == true){
        cout<<1;
        return 0;
    }
    d180();
    if(compare() == true){
        cout<<2;
        return 0;
    }
    d270();
    if(compare() == true){
        cout<<3;
        return 0;
    }

    turn();
    if(compare() == true){
        cout<<4;
        return 0;
    }

    t90();
    if(compare() == true){
        cout<<5;
        return 0;
    }
    t180();
    if(compare() == true){
        cout<<5;
        return 0;
    }
    t270();
    if(compare() == true){
        cout<<5;
        return 0;
    }

    if(no_change() == true){
        cout<<6;
        return 0;
    }

    cout<<7;

    return 0;
}