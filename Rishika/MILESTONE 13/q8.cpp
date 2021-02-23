//q8-Write a program to reverse a string.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string : ";
	getline(cin,s);
	int l=s.length();
	cout<<"Reversed string : ";
	for(int i=l;i>=0;i--)
	{
		cout<<s[i];
	}
}
