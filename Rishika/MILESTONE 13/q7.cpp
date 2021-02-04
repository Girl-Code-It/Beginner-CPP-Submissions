//q7-Write a program to find a substring within a string. If found display its starting position.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	int i,j;
	cout<<"Enter the first string = ";
	getline(cin,s1);
	cout<<"Enter the second string = ";
	getline(cin,s2);
 for(i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++)
	{
		if(s1[i]==s2[j])
		j++;
		else
		j=0;
	}
	if(j>0)
	cout<<"Substring "<<s2<<" found. Starting position is "<<i-j<<" index in string "<<s1;
	else
	cout<<"Substring not found.";
}
