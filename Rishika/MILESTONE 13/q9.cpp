//q9-Write a program to convert a string in lowercase. 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for(int i=0;s[i]!=0;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		s[i]=s[i]+32;
		cout<<s[i];
	}
}
