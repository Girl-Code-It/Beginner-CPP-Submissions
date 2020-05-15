#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;

	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ans[n],favor,anger,sum=0;
		for(int i=0;i<n;i++)
		{
		cin>>favor>>anger;
		ans[i]=favor+anger;
		sum+=anger;
		}
		sort(ans,ans+n);
        cout<<(ans[n-1]+ans[n-2]-sum)<<endl;
	}
}
