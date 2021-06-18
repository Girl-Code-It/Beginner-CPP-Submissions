#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,l,i;
	char s[30];
	cin>>t;
	while(t--)
	{
		cin>>s;
		l=strlen(s)-1;
		for( i=l ; i>=0 ; i-- )
		{
			cout<<s[i];
		}
		cout<<"\n";
	}
}
