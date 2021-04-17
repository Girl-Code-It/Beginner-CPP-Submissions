#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int M(long long* a,long long* b,long long n)
{
	int ans = 0;
		for(int i=0;i<n;i++)
		{
			int l = 0 , h = n-1 , m;
			int p = -1;
			while(l <= h)
			{
				m = (l+h)/2;
				if(b[m] >= a[i])
				{
					p = m;
					l = m + 1;
				}
				else
				{
					h = m - 1;
				}
			}
			ans = max(ans,p - i);
		}
	return ans;
}

int main()
{
        int t;
		long long n;
        cin>>t;
        while(t--)
        {
                cin>>n;
                long long A[n], B[n];

                for(int i=0; i<n; i++)
                        cin>>A[i];

                for(int i=0; i<n; i++)
                        cin>>B[i];

                cout<<M(A,B,n)<<endl;

                
        }
}
