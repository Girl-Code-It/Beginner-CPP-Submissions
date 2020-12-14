
//problem-06-13
#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"enter first string - "<<endl;
	getline(cin,s1);
	for(int i=s1.length()-1;i>=0;i--)
	{
		s2=s2+s1[i];
	}
	cout<<s2<<endl;
	if(s1==s2)
	{
		cout<<"strings are palindrome";
	}
	else
	{
		cout<<"strings are not palindrome";
	}}
		
