//Capicúa
//Capicúa
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s[100000];        
	long long int t;
	cin>>t;
	while(t--)
	{	int count=0;
	cin>>s;
		for(int i=0;i<strlen(s)/2;i++)  
		{
    	   if(s[i]!=s[strlen(s)-i-1])       
    	    count=1;
		}
     if(count!=1)                         
	 cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;	                
	}
} 
