#include<iostream>
#include<string.h>
using namespace std;
int main()
{   char s[20], s1[20];   // question : we have to check the string is palindrome or not . 
	int i,j,t;         //if its palindrome the print yes also print its even or odd else print no.
	cin>>t;
	while(t--)
{	 int  x=0;
	cin>>s;
		for(int i=0;i<strlen(s)/2;i++)  // checking palindrome.
		{
    	if(s1[i]!=s[strlen(s)-1-i])
    	x=1;
		}
     if(x!=0)
	 cout<<"no"<<endl; // if not a palindrome print no.
     else
     {cout<<"yes"<<endl;  // if palindrome print yes.
     	if(strlen(s)%2==0)
     	cout<<"even"<<endl;       // checking even odd.
     	else
     	cout<<"odd"<<endl;
	 	}
	 }
}
