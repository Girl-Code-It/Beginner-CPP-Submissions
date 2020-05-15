#include<bits/stdc++.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	long long int t,n,k,rem,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		string s;
		cin>>s;
		for(unsigned i=0;i<s.size();i++)
		{
        if(islower(s[i]))
        {
        	rem=k%26;
        	temp=(int)s[i]+rem;
			if(temp<=122)
		{cout<<(char)temp;}
			else
		{	cout<<(char)(temp-26);}
		}
    	else if(isupper(s[i]))
        {
        	rem=k%26;
        	temp=(int)s[i]+rem;
			if(temp<=90)
		{	cout<<(char)temp;}
			else
		{	cout<<(char)(temp-26);}
		}
		else #include<bits/stdc++.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	long long int t,n,k,rem,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		string s;
		cin>>s;
		for(unsigned i=0;i<s.size();i++)
		{
        if(islower(s[i]))
        {
        	rem=k%26;
        	temp=(int)s[i]+rem;
			if(temp<=122)
		{cout<<(char)temp;}
			else
		{	cout<<(char)(temp-26);}
		}
		if(isupper(s[i]))
        {
        	rem=k%26;
        	temp=(int)s[i]+rem;
			if(temp<=90)
		{	cout<<(char)temp;}
			else
		{	cout<<(char)(temp-26);}
		}
		if(isdigit(s[i]))
        {
        	rem=k%10;
        	temp=(int)s[i]+rem;
			if(temp<=57)
		{	cout<<(char)temp;}
			else
			{cout<<(char)(temp-10);}
		}
		else
		{
		cout<<s[i];}
	}
		cout<<endl;
	}
}
