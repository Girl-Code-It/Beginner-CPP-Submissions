//Write a program to display string from backward.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a string : ";
    getline(cin,s);
	int l=s.length();
	for(int i=l;i>=0;i--)
	{
		cout<<s[i];		
	}	
}
