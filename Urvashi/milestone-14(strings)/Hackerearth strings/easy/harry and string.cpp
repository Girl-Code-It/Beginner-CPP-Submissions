#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		char s[100000];
		int x=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')
			
			if((int)s[i]<(int)s[i+1])
			x=1;
			else if((int)s[i]>(int)s[i+1])
			x=2;
		}
		if(x==1)
		cout<<"Good"<<endl;
		else if(x==2)
		cout<<"Worst"<<endl;
		else 
		cout<<"Bad"<<endl;
	}
}
