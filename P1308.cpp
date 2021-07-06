#include<iostream>
#include<cstring>
using namespace std;
string s,str;
int t;
int f = -1;
int ans = 0;
int main(){
    getline(cin,str);
    getline(cin,s);

    for(int i=0; i <str.length();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
    }

    while(1)
    {
        t = s.find(str);
        if(t < s.size())
        {
            if( (t==0 || s[t - 1] == ' ') && (s[t +str.length()] == ' ' || (t + str.length() - 1) == (s.length() - 1))){
                ans++;
                if(f == -1 )
                    f = t;
            }
            for(int i=t,j=0;j<str.length();i++,j++)
                s[i] = '@';
        }
        else
        {
            break;
        }

    }

    if(ans == 0)
    {
        cout<< -1 ;
    }
    else 
    {
        cout<<ans << " "<<f;
    }
    return 0;
}