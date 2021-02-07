//binary
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,count,n;
	cin>>t;
	if(t>=1&&t<=10){
		while(t--){
		int l;
		cin>>l;
		string s,b;
		cin>>s;
		l=s.length();
		if(l>=1&&l<=100)
		{   
			for(int i=0;i<l;i++)
			{ count=0;
			for(int j=i+1;j<=l;j++)
			{
			 b=s.substr(i,j);
			 n=b.length();
			}
			for(int k=0;k<n;k++)
			{
				if(b[0]=='1'&&b[n]=='0')
				{count++;
				break;
				}
			}
			}cout<<count;
			}
		}
		}
}

