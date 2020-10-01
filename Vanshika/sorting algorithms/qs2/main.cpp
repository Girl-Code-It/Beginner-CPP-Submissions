#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll n,m,i,count=0;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    cin >> m;
    ll b[m];
    for(i=0;i<m;i++)
        cin >> b[i];
        sort(a,a+n);
        sort(b,b+m);
        int pvt=lower_bound(a,a+n,b[m-1]+1)-a;
        for(i=0;i<pvt;i++)
            count+=(b[m-1]+1-a[i]);
            cout << count << endl;

    return 0;
}
