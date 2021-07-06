#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int user;
string str;
int flag;
int byte;
int ans;
int main(){
    while(getline(cin,str)){
        if(str[0] == '+'){
            user ++;
        }
        else if(str[0] == '-'){
            user--;
        }
        else{
            for(int i=0;i<str.length();i++){
                if(str[i] == ':'){
                    flag = i;
                    break;
                }
            }
            for(int i=flag+1;i<str.length();i++){
                byte ++;
            }
            ans += byte * user ;
            byte = 0;
        }
    }
    cout<<ans;
    return 0;
}