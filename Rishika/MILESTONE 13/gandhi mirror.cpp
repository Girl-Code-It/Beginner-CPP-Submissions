//Gandhi's mirror image of numbers
//palindrome different from 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t,p=0,i,j;
	cin>>t;
	if(t>=1&&t<=100)
	{
		while(t--)
		{
		string n;
		cin>>n;
		int l=n.length(),c0=0,c1=0,c8=0;
		for(i=0;i<l;i++)
		{
			if(n[i]=='1')c1++;
			if(n[i]=='0')c0++;
			if(n[i]=='8')c8++;
		}
		string r=n;
		reverse(n.begin(),n.end());
		if(r==n&&((c0+c1+c8)==l))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
	}
}
