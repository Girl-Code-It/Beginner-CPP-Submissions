//good string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if(t>=1&&t<=10){
	string s;
	cin>>s;
	int l=s.length(),i;
	if(l>=1&&l<=100){
	int count=0;
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
			cout<<s[i];
		}else if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
			cout<<s[i];
		}
	}
	}else
	cout<<"Invalid Test";	
	}else
	cout<<"Invalid Test";
}
