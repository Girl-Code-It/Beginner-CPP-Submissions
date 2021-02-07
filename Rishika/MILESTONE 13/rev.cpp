//reverse string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,l,i;
	cin>>t;
	if(t>=1&&t<=10)
	{
		while(t--)
		{
			string s;
			cin>>s;
			l=s.length();
			if(l>=1&&l<=30)
			{
				for(i=l-1;i>=0;i--)
				cout<<s[i];
			}cout<<endl;
		}
	}
}
