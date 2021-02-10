//is substring a palindrome
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,b,c;
	cin>>s;
	if(s.length()>=1&&s.length()<=100000)
	{
		int i,j,k,p;
		for(i=0,j=i+1;i<s.length();i++)
		{
			b=s.substr(i,j);
			int l=b.length();
			for(k=0;k<l;k++)
			{
				if(b[k]==b[l-k])
				c=b;
			}
			j++;
		}cout<<c.length();
	}	
}
