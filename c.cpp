#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<ctime>
#include<queue>
using namespace std;
const long long MOD = 998244353;
string s;
long long ans;

struct stack{
    int top;
    char c[10000008];
    stack() {
        top = 0;
        memset(c,0,sizeof(c));
    }
    void clear() {
        top = 0;
    }
    void push(char _c){
        c[top++] = _c;
    }
    void pop() {
        top --;
    }
    char up(){
        return c[top - 1];
    }
    bool empty() {
        if(top == 0 ) {
            return true;
        }
        else
            return false;
    }
} st;

bool ok(string str) {
    st.clear();
    for(int i=0;i<str.length();i++) {
        if(str[i] == '(')
            st.push(str[i]);
        if(str[i] == ')')
            if(st.up() == '(')
                st.pop();
    }
    return st.empty();
}

int main(){
    int n;
    cin >> n;
    cin >> s;

    for(int i=0;i<n;i++) {
        for(int j = i + 1;j <n;j++) {
            string sty = s;
            swap(sty[i],sty[j]);
            if(ok(sty)){
                ans += 1;
                ans %= MOD;
            }
        }
    }

    cout<< ans % MOD;

    return 0;
}