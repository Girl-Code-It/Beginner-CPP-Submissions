// Write a program to count number of words in string.
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	char s[50];
	int w;
	cout<<"Input a string : ";
	cin.getline(s,50);
	for(int i=0;s[i]!=0;i++)
	{
		if(s[i]==' ')
		w++;
	}
	cout<<"Number of words in the string are = "<<w+1;
}
