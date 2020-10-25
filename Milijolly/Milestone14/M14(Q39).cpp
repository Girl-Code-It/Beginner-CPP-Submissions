//Mirror of Mahatma Gandhi
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{   int i,count=0;
		string s;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
		if(!(s[i]=='0' || s[i]=='1' || s[i]=='8')) 
		{ count++;
		  break;
		}
		}
		for(i=0;i<s.size()/2;i++)
		{
		if(s[i]!=s[s.size()-i-1])
		{
		   count++;
		   break;
		}
		}
		if(count==0) 
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}

