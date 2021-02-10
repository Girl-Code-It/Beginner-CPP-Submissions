//Write a program to compare two strings they are exact equal or not.
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	cout<<"Enter first string - ";
	getline(cin,s1);
	cout<<"Enter second string - ";
	getline(cin,s2);
	if(s1==s2)
	{cout<<"Strings are equal";
	}else
	{cout<<"Strings are not equal";
	}
}
