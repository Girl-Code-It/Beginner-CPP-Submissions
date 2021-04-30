#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,k;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>k;

        if(c >= k)
            cout<<"0";

        else
        {
            unsigned long long start = 0,end = k/a,mid,ans;
            while(start <= end)
            {
                mid = start + (end - start)/2;

                if(a*mid*mid + b*mid + c >= k)
                {
                    ans = mid;
                    end = mid - 1;
                }
                else
                    start = mid + 1;

            }
            cout<<ans;
        }
    }
}
