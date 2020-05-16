#include<iostream>
#include<string.h>
#include<bits/stdc++.h> //question: to print  maximum length of substring so that its not palindrome.
using namespace std;
int main()
{
	int x=0;
	char s[100000];
	string b;
	cin>>s;
    for(int i = strlen(s)-1; i>=0; i--) { 
    b += s[i];  // store reverse of string into b.
    if(i > 0) {
    if(s[i-1] != s[i]) //if alternate char of string are not equal.
    x = 1;
    }
    }
	if(x==0) // if all char of string are equal then there is no way to convert into a substring which is not palindrome.
	{
    cout<<"0"<<endl;
	}
	else if(b!=s) //if string is not palindrome .
	{
		cout<<strlen(s)<<endl; // its only the mxm length substring.
	}
	else if(b==s) //if its palindrome.
	cout<<strlen(s)-1<<endl; // after decresing its length by one we get a substring of max length which is not a palindrome.
}
