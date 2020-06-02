#include<iostream>
using namespace std;
int main()
{
	char s[20], s1[20];
	cout<<"enter the string:";
	gets(s);
	int count=0;
	int i,j, temp;
	cout<<"reverse string is= ";
	while(s[count]!='\0')
	{
	count++;	
	}
	for( i=count-1;i>=0;i--)
	{
	s1[i]=s[count-1-i];
	}
		cout<<s1;
}
