#include<iostream>
#include<string>
using namespace std;
int n,a, b, c;
string s, s1, s2;
int main(){
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==1){
			cin>>s2;
			s+=s2;
			cout<<s<<endl;
		}
		else if(a==2){
			cin>>b>>c;
			s1=s.substr(b,c);
			s=s1;
			cout<<s;
			cout<<endl;
		}
		else if(a == 3){
			cin>>b>>s2;
			s.insert(b, s2);
			cout<<s<<endl;
		}
		else if(a == 4){
			cin >> s2;
			if(s.find(s2)<s.size())
			    cout<<s.find(s2)<<endl;
			    else
			cout<<-1<<endl;
		}
	}
    return 0;
}