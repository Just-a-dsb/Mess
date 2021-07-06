#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<algorithm>
using namespace std;
map<string,int> num;
int p[80];
string s;
int main(){
    num["one"]=1;num["two"]=2;num["three"]=3;num["four"]=4;num["five"]=5;num["six"]=6;num["seven"]=7;num["eight"]=8;num["nine"]=9;num["ten"]=10;num["eleven"]=11;num["twelve"]=12;num["thirteen"]=13;num["fourteen"]=14;num["fifteen"]=15;num["sixteen"]=16;num["seventeen"]=17;num["eighteen"]=18;num["nineteen"]=19;num["twenty"]=20;num["a"]=1;num["both"]=2;num["another"]=1;num["first"]=1;num["second"]=2;num["third"]=3;
    int flag = 0;
    for(int i=1;i<=6;i++){
     	cin>>s;
     	if(num[s]){
     		int k = num[s] * num[s] % 100;
     		if(k==0)
                continue;
            flag ++;
            p[flag] = k;
		 }
	 }
	 sort(p + 1,p + flag + 1);
	 cout << p[1];
	 for(int i = 2;i <= flag;i++){
	 	if(p[i] < 10 ){
             cout<<"0";
         }
        cout<<p[i];
	 }
	 return 0;

}