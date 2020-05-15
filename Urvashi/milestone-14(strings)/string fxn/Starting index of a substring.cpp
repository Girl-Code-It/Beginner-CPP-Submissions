#include<iostream>
using namespace std;
int main()
{
	char s[20], s1[20];
	cout<<"enter the string:";
	gets(s);
	cout<<"enter the substring:";
	gets(s1);
	int count=0, cat=0;
	int i,j=0;
	cout<<"starting position is= ";
	while(s[count]!='\0')
	{
	count++;	
	}
	for( i=0;s[i]!='\0'&&s1[j]!='\0';i++)
	{
	if(s1[j]==s[i])
	j++;
	else
	j=0;
	}
    cout<<i-j+1;
}
