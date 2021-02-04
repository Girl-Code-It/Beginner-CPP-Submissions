//q10-Write a program to convert a string in uppercase.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for(int i=0;s[i]!=0;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]=s[i]-32;
		cout<<s[i];
	}
}
