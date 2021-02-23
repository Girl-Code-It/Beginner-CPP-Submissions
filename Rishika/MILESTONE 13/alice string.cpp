#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	string b;
	int i,j,c;
	getline(cin,a);
	getline(cin,b);
	int la=a.length();
	int lb=b.length();
	if(la>=1&&la<=1000000&&lb>=1&&lb<=1000000)
	{  
		for(i=0;i<la;i++)
		{   c=1;
			if(a[i]=='z')
			c=0;
			break;
		}
		for(i=0,j=0;i<la&&j<lb;i++,j++)
		{   c=1;
			if(a[i]==b[i])
			{
				c++;
			}
			if(lb<la)
			{
				c=0;
				break;
			}else if(a[i]>b[j])
			{
				c=0;
				break;
			}
			else if(a[la]==b[lb])
			{
				c++;
			}
		}
		if(c==0)
		cout<<"Not Compatible.";
		else
		cout<<"Compatible.";
	}
}

