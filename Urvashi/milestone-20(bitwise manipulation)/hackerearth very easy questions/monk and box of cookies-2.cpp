#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,x,j,ar[32]={0},ans=0;//initialising all 32 bits to 0..
		cin>>n;
 
		for(i=0;i<n;i++)
		{
            cin>>x;//input balls having integers on it..
 
			for(j=0;j<32;j++)
			{
                if(x & (1<<j))//taking & of integer with all bit index if it is not 0 to check whether jth bit is set or not..
				ar[j]++; //increase bit value at that index..
			}
		}
		   for(i=1;i<32;i++)
		   {
			   if(ar[i]>ar[ans])
			   ans=i;
		   }
		      cout<<ans<<endl;
	}
}
