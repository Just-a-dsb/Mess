#include<iostream>
#include<cstring>
using namespace std;
string s;
char mode = '0'; //mode of FUHAO
bool p, q, t;   //flag
int f = -1;
int flag;         //Flag of Fuhao
int main(){
    cin >> s;

    if(s == "0"||s == "0.0"||s=="0%"){
        cout<<s;
        return 0;
    }




    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]<'0' || s[i] > '9'){
            mode = s[i];
            flag = i;
        }
    }
    //ZHENG SHU 
    p = false;
    if(mode == '0'){
        for(int i=s.length() - 1;i>=0;i--){
            if(p == true)
                cout<<s[i];
            else if(!p)
                if(s[i] != '0'){
                    cout<<s[i];
                    p=true;
                }
        }
    }
    //BAIFENSHU
    p = false;
    if(mode == '%'){
        for(int i=s.length() - 2;i>=0;i--){
            if(p == true)
                cout<<s[i];
            else if(!p)
                if(s[i] != '0'){
                    cout<<s[i];
                    p=true;
                }
        }
        cout<<"%";
    }
    //FENSHU
    p =false;
    if(mode == '/'){
        if(s[0] == '0'&& s[1]=='/')
            cout<<"0";
        else
        for(int i=flag - 1;i>=0;i--){
            if(p == true)
                cout<<s[i];
            else if(!p)
                if(s[i] != '0'){
                    cout<<s[i];
                    p=true;
                }
        }

        cout<<mode;p =false;
        for(int i=s.length()-1;i>flag;i--){
            if(p == true)
                cout<<s[i];
            else if(!p)
                if(s[i] != '0'){
                    cout<<s[i];
                    p=true;
                }
        }
    }
    //XIAOSHU
    p =false;
    if(mode == '.'){
        if(s[0] == '0'&& s[1]=='.')
            cout<<"0";
        else
        for(int i=flag - 1;i>=0;i--){
            if(p == true)
                cout<<s[i];
            else if(!p)
                if(s[i] != '0'){
                    cout<<s[i];
                    p=true;
                }
        }

        cout<<mode;p =false;

        for(int i = flag + 1;i<s.length();i++){
            if(p == false &&  s[i] !='0'){
                f = i - 1;
                p =true;
            }
        }
        if(s[s.length() - 1] == '0'&& s[s.length() - 2] == '.'){
            cout<<"0";
            return 0;
        }
        else{
            for(int i=s.length() - 1;i>f;i--){
                cout<<s[i];
            }
        }
    }
    //END
    return 0;
}