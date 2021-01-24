#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
	int t,i,j;
  	char s[100];
  	cin>>t;
  	while(t--)
  	{	
		cin>>s;
  		int n,l;
  		l=strlen(s);
    		for(i=0;i<l;i++)
		{ 
			n=0;
	  		for(j=0;j<i;j++)
	  		{
				if(s[j]==s[i])
	    			n++;
	  		}
	  		if(n==0)
	  		cout<<s[j];
	 	}
		cout<<endl;
  	}

}
