//sorted string 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int f[26]={0},l=s.length(),i,min;
	for(i=0;i<l;i++)
	{
		f[s[i]-'a']++;
	}	
	for(i=0;i<l;i++)
	{
		if(f[s[i]-'a']!=0)
		cout<<f[s[i]-'a']<<" ";
		f[s[i]-'a']=0;
	}
	
}
