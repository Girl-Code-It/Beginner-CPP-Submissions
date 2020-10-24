//47's Strings
#include<iostream>
#include<string.h>
using namespace std;
int main()                
{
	char s[1000000];
	int t;
	cin>>t;
	while(t--)
	{   
		long long n,sub=0,count=0;              //initialising k=0;
		cin>>s;
		n=strlen(s);
		for(long long i=0;i<strlen(s);i++)   // traversing string.
		{  
			if(s[i]=='$'||s[i]=='&')                                
			{
				 sub += ((count + 1) * (n - i)); 
				 count = 0;
			}
			else
			count++;

		}
		cout<<sub<<endl;
	}
}
