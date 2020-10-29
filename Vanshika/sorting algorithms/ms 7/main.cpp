#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n,q,i;
    cin >> n >> q;
    ll a[n];
    for(i=0;i<n;i++)
        cin>> a[i];
    while(q--){
            ll k,l,r,x;
        cin >> k >> l >> r >> x;
             if(k==1){
                for(i=0;i<n;i++){
                    if(a[i]>=l&&a[i]<=r)
                      a[i]+=x;
                                 }
                   }else{
                   for(i=0;i<n;i++){
                    if(a[i]>=l&&a[i]<=r)
                      a[i]=x;
                                 }
                   }
                      }
                   for(i=0;i<n;i++)
                    cout << a[i] << " ";
    return 0;
}
