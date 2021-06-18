//marut and strings
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t,p=0;
    cin>>t;
    if(t>=1&&t<=10){
    	 while(t--)
    {
    string s;
	cin>>s;
	int i=0,j,l=s.length(),firstlow,lastup,ctup=0,ctlow=0;
	if(l>=1&&l<=100)
	{
	for(i=0;i<l;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{p++;
		break;
		}else
		{p=0;
		}
	}if(p>0)	
	{for(i=0;i<l;i++)
	{
		if(islower(s[i]))
		{firstlow=i;
		break;
	    }
	}
	for(i=firstlow;i<l;i++)
	{
		if(islower(s[i]))
		{
			ctlow++;
		}
	}
	for(i=l;i>=0;i--)
	{
		if(isupper(s[i]))
		{lastup=i;
		break;
		}
	}
	for(i=lastup;i>=0;i--)
	{
		if(isupper(s[i]))
		{
			ctup++;
		}
	}
	cout<<min(ctup,ctlow)<<endl;
	}else
	{
		cout<<"Invalid Input"<<endl;
	}
	}else
	{
		cout<<"Invalid Input"<<endl;
	}
	}
	}else
	{
		cout<<"Invalid Test"<<endl;
	}
}
