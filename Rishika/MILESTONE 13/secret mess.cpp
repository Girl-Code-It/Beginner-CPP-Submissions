//secret messages
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,n,k,i;
	cin>>t;
	if(t>=1&&t<=100)
	{while(t--)
	{
		cin>>n>>k;
		string s;
		cin>>s;
		n=s.length();
if(n>=1&&n<=1000000&&k>=0&&k<=1000000)
	{
	    for(i=0;i<n;i++)
		{
		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
		s[i]=s[i]+k;
		}	
	}cout<<s;		
	}
	}
}
