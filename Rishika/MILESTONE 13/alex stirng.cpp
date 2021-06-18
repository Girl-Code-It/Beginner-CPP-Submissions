//alex and string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s,x;
	cin>>s;
	int k,n,i;
	cin>>k;
	char min;
	n=s.length();
	while(n--)
	{  
	    min=s[0];
	    for(i=1;i<k;i++)
	    {
	    	if(s[i]<=min)
	    	{
	    		min=s[i];
	    		break;
			}
		}
		x=x+min;
		n--;
	}cout<<x;
}	

