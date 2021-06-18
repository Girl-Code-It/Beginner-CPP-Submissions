#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1000001];
		cin>>s;
		long long n=0,ans=0;
		for(int l=0;s[l]!=0;l++)
		{
			if(s[l]=='$'||s[l]=='&')
			n=l+1;
		}ans+=n;;
		cout<<ans<<endl;
	}return 0;
}
