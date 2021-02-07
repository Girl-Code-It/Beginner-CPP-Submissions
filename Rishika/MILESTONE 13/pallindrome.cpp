//pallindrome
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,j,t,c;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		for(i=0;i<l/2;i++)
		{   c=0;
			for(j=l;j>=l/2;j--)
			{
				if(s[i]==s[j])
				c++;
			}
		}
		if(c>0)
		cout<<"YES";
		else
		cout<<"NO";
	}
}
