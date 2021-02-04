//Write a program to concatenate one string contents to another.
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	string s3;
	cout<<"Enter string1- ";
	getline(cin,s1);
	cout<<"Enter string2- ";
	getline(cin,s2);
	cout<<"string 1 - "<<s1<<endl;
	cout<<"string 2 - "<<s2<<endl;
	s3=s1+s2;
	cout<<"Concatinated string- "<<s3;
}
