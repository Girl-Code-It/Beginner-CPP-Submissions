//strongest string
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
	{string s,n,sorted,rev;
	cin>>s;
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			n=n+s[i];
		}
	}
	sorted=n;
	sort(sorted.begin(),sorted.end());
	rev=sorted;
	reverse(rev.begin(),rev.end());
	if(n==sorted)
	cout<<"Good"<<endl;
	else if(n==rev)
	cout<<"Worst"<<endl;
	else
	cout<<"Bad"<<endl;
	}
}

