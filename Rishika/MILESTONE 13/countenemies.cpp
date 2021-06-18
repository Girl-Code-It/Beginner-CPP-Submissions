//count the enemies
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	if(t>=1&&t<=30)
	{
		while(t--){
		string s;
		cin>>s;
		int i,count=0;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='O'&&(s[i-1]=='*'||s[i-1]=='O')&&(s[i+1]=='*'||s[i+1]=='O'))
			{count++;
			}
		}cout<<count<<endl;
		}
	}
}
