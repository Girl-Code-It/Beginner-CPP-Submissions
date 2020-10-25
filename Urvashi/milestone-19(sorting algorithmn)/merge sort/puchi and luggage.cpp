#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::cin.sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];

        for(int i=0; i<n; i++)
        {
            int count = 0;
            for(int j=i+1; j<n; j++)
            {
                if(a[j] < a[i])
                    count++;
            }
         cout<<count<<endl;
        }
     cout<<endl;
    }
}

