#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;

	while(t--)
	{	
	int count=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		count++;
	}
	cout<<count<<endl;
	}
}
