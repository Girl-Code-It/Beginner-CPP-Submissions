#include<iostream>
#include<string.h>
using namespace std;
int atoi(char *a ,int n )
{
	if(n==1)
	return *a-'0';
	else 
	return (10*(atoi(a ,n-1))+a[n-1]-'0');
}
int main()
{
char a[100];
cin>>a;
int n=strlen(a);
cout<<atoi(a,n);	
}
