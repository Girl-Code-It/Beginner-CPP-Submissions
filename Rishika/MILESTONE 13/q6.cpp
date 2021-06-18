//Write a program to check a string is pallindrome or not. 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int p;
	cout<<"Input a string - ";
	getline(cin,s);
	int l=s.length();
	for(int i=0;i<l/2;i++)
	{	 p=0;
		for(int j=l;j>=l/2;j--)
		{
			if(s[i]==s[j])
			p++;
		}
	}
	if(p>0)
	cout<<"Palindrome";
	else
	cout<<"Not a Palindrome";
}
