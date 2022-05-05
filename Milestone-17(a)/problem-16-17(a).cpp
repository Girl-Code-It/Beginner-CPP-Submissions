#include<iostream>
#include<string.h>
using namespace std;
string palindrome(char s1[],int size,int index)
{
	static string s2;
	if(index>=size)
	{
		return s2;
	}
	
	palindrome(s1,size,index+1);
	s2+=s1[index];
	return s2;
	
}
int main()
{
	char s1[20];
	string s;
	cout<<"enter any string "<<endl;
	cin>>s1;
	int size=strlen(s1);
	s=palindrome(s1,size,0);
	if(s1==s)
	cout<<"yes";
	else
	cout<<"no";
}
