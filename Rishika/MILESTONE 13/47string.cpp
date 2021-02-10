//47 string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,j,l,v;
	cin>>t;
	if(t>=1&&t<=10){
		while(t--)
		{   v=0;
			string s;
			cin>>s;
			l=s.length();
			if(l>=1&&l<=1000000){
			for(i=0;i<l;i++)
			{   
				if(s[i]=='$'||s[i]=='&')
				{     
				for(j=i+1;j<=l;j++)
					{
						if(s.substr(i,j).find('$')!=-1||s.substr(i,j).find('&')!=-1)
						v++;
						else
						v=0;
				    }		
				}
			}cout<<v<<endl;
			}
	    }
	}
}
