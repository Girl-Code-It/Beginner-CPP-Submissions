#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll k,i,j=1;
    cin >> k;
    ll a[k];
    for(i=0;i<k;i++){
        cin >> a[i];
         a[i]+=j;
              }
        sort(a,a+k,greater<ll>());
        cout << a[0]+2;
    return 0;
}
