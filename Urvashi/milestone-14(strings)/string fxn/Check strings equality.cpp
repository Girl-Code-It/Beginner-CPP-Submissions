#include<iostream>
using namespace std;
int main()
{
	char s[20], s1[20];
	cout<<"enter the string:";
	gets(s);
	cout<<"enter the second string:";
	gets(s1);
	int i,j, temp, x;
	for( i=0;s[i]==s1[i]&&s[i]!='0'&&s1[i]!='0';i++)
	{
     if(s1[i]-s[i]==0)
    	x=0;
}
if(x==0)
cout<<"equal";
else
cout<<"unequal";
}
