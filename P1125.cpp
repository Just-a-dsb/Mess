#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int word[30];
int maxn,minn;
string s;
bool is_prime(int p) {
    if(p==0||p==1){
        return false;
    }
    if(p==2)
        return true;
    for (int i = 2;i<p;i++) {
        if(p % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    cin >> s;
    for(int i=0;i<s.length();i++){
        word[s[i]-'a'+1]++;
    }

    int minn=114514,maxn=-114514;

    for(int i=1;i<=26;i++){
        if(word[i]!=0)
        minn=min(word[i],minn);

        maxn=max(word[i],maxn);
    }

    int luck = maxn - minn;
    if(is_prime(luck) == true){
        cout<<"Lucky Word\n";
        cout<<luck;
    }
    else {
        cout<<"No Answer\n";
        cout<<0;
    }

    return 0;
}