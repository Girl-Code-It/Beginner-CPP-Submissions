#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,j,temp=0;
	int l=s.length();
	if(l<=5)
	{
		if(l>=1&&l<=100)
		{
			for(i=0;i<l;i++)
			{   temp=0;
				for(j=l;j>=0;j--)
				{
					if(s[i]!=s[j])
					temp=1;
				}
			}if(temp==1){
			for(i=0;i<l;i++)
			{
				cout<<s[i];
			}
		}
		}
	}
}
