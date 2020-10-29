#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,m,flag=0,i;
        cin >> n >> m;
        ll a[n],b[m];
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<m;i++)
        cin >> b[i];
        if(n>m){
        cout << "NO" << endl;
        continue;
        }else{
            sort(a,a+n);
            sort(b,b+n);
            for(i=0;i<n;i++){
                if(a[i]<b[i]){
                    cout << "NO" << endl;
                   flag=1;
                   break;
                      }
                        }
                      if(flag==0)
                cout << "YES" << endl;
        }

    }

    return 0;
}
