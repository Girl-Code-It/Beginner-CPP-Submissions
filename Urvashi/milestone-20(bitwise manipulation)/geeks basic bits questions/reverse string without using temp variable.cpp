#include<iostream>
#include<string.h>
using namespace std;

//reverse string .
char* reverseString(char* x, int start , int end)
{
while(start<end)
{
	x[start]^=x[end];
	x[end]^=x[start];
	x[start]^=x[end];
	
	++start;
	--end;
}
return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	char x[100];
	cin>>x;	
	int n=strlen(x);
    cout<<reverseString(x,0,n-1);
	}
}
