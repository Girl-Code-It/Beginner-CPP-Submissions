#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t,target,q;
	cin>>t;

	int a[t];
	for(int i=0;i<t;i++)
		cin>>a[i];
	
	cin>>q;

	while(q--)
	{
		int i,sum=0;
		cin>>target;
		for(i=0;i<t;i++)
		 {  
			 sum+=a[i];
			 if(sum>= target)
			  break;
		 }
		 if(i==t)
		 	cout<<"-1"<<endl;
		  else
		 cout<<i+1<<endl;
	}
	
}

