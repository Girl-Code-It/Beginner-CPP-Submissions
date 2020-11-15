#include<iostream>
using namespace std;
int main(){
	int n,count=0,ob1=0,cb1=0,ob2=0,cb2=0,ob3=0,cb3=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		count=0;
		ob1=0;cb1=0;ob2=0;cb2=0;ob3=0;cb3=0;
		for(int j=0;j<s.length();j++){
			if(s[j]=='('){
				ob1++;
			}else if(s[j]==')'){
				cb1++;
			}else if(s[j]=='{'){
				ob2++;
			}else if(s[j]=='}'){
				cb2++;
			}else if(s[j]=='['){
				ob3++;
			}else if(s[j]==']'){
				cb3++;
			}
		}
		count= (ob1 > cb1 ? cb1 : ob1)*2;
		count+= (ob2 > cb2 ? cb2 : ob2)*2;
		count+= (ob3 > cb3 ? cb3 : ob3)*2;	
		cout<<count<<endl;
	}
	return 0;
}
