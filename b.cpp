#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<ctime>
#include<queue>
#include<set>
using namespace std;
// vector<string> q[100008];
struct joke {
    string st;
    int flag;
    joke () {
        flag = 0;
    }
};
queue<joke> q;
string s;
long long ans;
int len ;
bool huiwen(string str) {
    for(int i=0,j=str.length() - 1;i<j;i++,j--) {
        if(str[i] != str[j]){
            return false;
        }
    }
    return true;
}

string change(string st,char c,char t){
    for(int _i = 0;_i<st.length();_i++) {
        if(st[_i] == c)
            st[_i] = t;
    }
    return st; 
}

void bfs() {
    // for(int i = 0;i<s.length();i++) {
    //     l.insert(s[i]);
    // }
    joke temp,sty;
    sty.st = s;
    sty.flag = 0;
    q.push(sty);
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        if( huiwen(temp.st) ) {
            ans = temp.flag;
            return;
        }
        
        joke newtemp;

        for(int i=0;i<len;i++)
            for(int j=0;j<len;j++) 
                if(temp.st[i] != temp.st[j]){
                newtemp.flag = temp.flag + 1;
                newtemp.st = change(temp.st,temp.st[i],temp.st[j]);
                q.push(newtemp);
                goto unravel;
            }
        unravel:;
    }
    
    return;
}

int main(){
    cin >> s;
    len = s.length();
    bfs();
    cout<< ans;
    return 0;
}