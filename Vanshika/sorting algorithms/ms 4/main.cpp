#include <bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin >> t;
    while(t--){
               ll n,m,i,j;
               cin >> n >> m;
               ll a[n+m],L[n],R[m];
               for(i=0;i<n;i++)
                cin >> L[i];
               for(j=0;j<m;j++)
                cin >> R[j];
               i=0,j=0;
               ll k=0,x;
   while(i<n&&j<m){
    if(L[i]>=R[j]){
        a[k]=L[i];
        k++;i++;
    }else{
       a[k]=R[j];
       j++;k++;
         }
            }
    while(i<n){
        a[k]=L[i];
        k++;i++;
            }
    while(j<m){
        a[k]=R[j];
        k++;j++;
              }
    for(x=0;x<(n+m);x++)
         cout << a[x] << " ";


    }
    return 0;
}
