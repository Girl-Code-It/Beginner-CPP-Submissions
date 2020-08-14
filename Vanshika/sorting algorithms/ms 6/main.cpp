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
              for(i=n-1;i>=0;i--)
                cout << a[i] << " ";
              cout << endl;
   }
    return 0;
}
