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
                 ll a[n],count=1;
                 for(i=0;i<n;i++)
                    cin >> a[i];
                    sort(a,a+n);
                    for(i=0;i<n-1;i++){
                        if(a[i]==a[i+1])
                            count++;
                    }
                 cout << count << endl;
    }




    return 0;
}
