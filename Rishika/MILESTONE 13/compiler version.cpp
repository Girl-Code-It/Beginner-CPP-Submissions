//compiler version
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,t,p,l;
	string s;
	while(getline(cin,s))
	{  
	    l=s.length();
		for(i=0;i<l;i++)
		{
			if(s[i]=='/'&&s[i+1]=='/')
			{
				p=i;
				for(i=0;i<p;i++)
		{
			if(s[i]=='-'&&s[i+1]=='>')
			{
				cout<<'.';
				i++;
			}else
			{
				cout<<s[i];
				for(i=0;i<p;i++)
		{
			if(s[i]=='-'&&s[i+1]=='>')
			{
				cout<<'.';
				i++;
			}else
			{
				cout<<s[i];
			}
		}
		for(i=p;i<l;i++)
		{
			cout<<s[i];
		}
			}
		}
		
	}
	}}
}
