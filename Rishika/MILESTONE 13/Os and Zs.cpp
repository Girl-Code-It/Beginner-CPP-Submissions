//swap Os and Zs
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	char c=0;
	int l=a.length(),i,count=0,cz=0,co=0;
	for(i=0;i<l;i++)
	{
		if(a[i]=='Z')
		cz++;
		else
		co++;
	}
  for(i=0;i<l;i++)
	{   if(cz>=co)
	{
	for(int j=0;j<l;j++)
	{	if(a[i]=='Z'&&a[i+1]=='O')
		{
			c=a[i];
			a[i]=a[i+1];
			a[i+1]=c;
			count++;
		}
	}
	cout<<count;
	}else if(co>cz)
	{  
		for(i=0;i<l;i++)
	{   if(a[i]=='O'&&a[i+1]=='Z')
		{
			c=a[i];
			a[i]=a[i+1];
			a[i+1]=c;
			count++;
		}
	}
	}cout<<count;
	}
}
