#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
      ll t;
      cin >> t;
      while(t--){
              ll n,i;
              cin >> n;
              ll a[n];
              for(i=0;i<n;i++)
                cin >> a[i];
              sort(a,a+n);
              if((a[n-1])%2==0)
                  temp=a[n-1];
                else temp=a[n-1]-1


      }
    return 0;
}
