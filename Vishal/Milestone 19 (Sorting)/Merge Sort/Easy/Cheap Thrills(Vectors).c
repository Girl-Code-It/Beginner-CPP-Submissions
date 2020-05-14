#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++) 
        {
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int j=v[i].second;
            if(i%2 != j%2)
            ans++;
        }
        cout<<ans/2<<"\n";
    }

    return 0;
}