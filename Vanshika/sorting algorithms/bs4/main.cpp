#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    ll a[n],b[n],i;
    for(i=0;i<n;i++)
        cin >> a[i];
     for(i=0;i<n;i++)
        cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        if(a[n-1]>b[n-1])
            cout << "Yes" << endl;
          else cout << "No" << endl;
    return 0;
}
