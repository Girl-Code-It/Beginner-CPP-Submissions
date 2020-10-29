#include<bits/stdc++.h>

using namespace std;
map<int,int> mp;
int a[100100]= {0};
int main()
{
    priority_queue<pair<int,int> >P;
    int n,i,x,m;
    int k=0;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(mp.count(x)==0)
        {
            mp[x]=k;
            a[k]++;
            k++;
        }
        else
        {
            a[mp[x]]++;
        }
        P.push(make_pair(a[mp[x]],x));
        printf("%d %d\n",P.top().second,P.top().first);
    }
    
    return 0;
}