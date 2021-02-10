//UpUp
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			if(s[i+1]>=97&&s[i+1]<=122)
			{
				s[i+1]=s[i+1]-32;
			}
		}else if(s[0]>=97&&s[0]<=122)
		{
			s[0]=s[0]-32;
		}
	}
	for(int i=0;i<l;i++)
	{
		cout<<s[i];
	}
}
