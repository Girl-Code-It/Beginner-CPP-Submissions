#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
        long ans=2,k=2;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=ans)
            {
                ans=2*(k++);
            }
        }
        cout<<ans<<endl;
		}
	}
