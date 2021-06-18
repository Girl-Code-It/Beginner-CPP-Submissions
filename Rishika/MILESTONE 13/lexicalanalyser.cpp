//lexical analyser
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,c=0,i,m;
	cin>>n;
	m=n+1;
	if(n>=1&&n<=100000)
	{
	    while(m--)
		{	
		    string s;
			getline(cin,s);
			int l=s.length();
			for(i=0;s[i]!=';';i++)
			{
				if(s[i]=='='&&s[i-1]>=' '&&s[i+1]==' '&&(s[i-2]>='a'&&s[i-2]<='z'))
				c++;
			}
		}cout<<c;
	}
}
