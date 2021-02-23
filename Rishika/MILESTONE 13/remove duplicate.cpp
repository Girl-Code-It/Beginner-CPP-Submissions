//remove duplicate characters from string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,t="";
	cin>>s;
	int l=s.length();
	if(l>=1&&l<=100000){
	int a[200]={0};
	for(int i=0;i<s.length();i++)
	{
		if(a[s[i]]==0)
		{
			a[s[i]]=1;
			t=t+s[i];
		}
	}
	cout<<t;	
	}
}
