#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll sum_of_digits(ll n)
{
    if(n%9==0)
    {
        return 9ll;
    }
    else
    {
        return (n%9);
    }
}

int main()

{
    ll n,q,a,b;
    cin>>n>>q;
    ll arr[n];
    ll mx[n];
    ll mn[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=sum_of_digits(arr[i]);
    }
    sort(arr,arr+n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        mn[i]=sum;
    }
    sum=0;
    int j=0;
    for(int i=n-1;i>=0;i--,j++)
    {
        sum=sum+arr[i];
        mx[j]=sum;
    }
    while(q--)
    {
        cin>>a>>b;
        if(a==1)
        {
            cout<<mx[b-1]<<endl;
        }
        else
        {
            cout<<mn[b-1]<<endl;
        }
    }
    
    return 0;
}
