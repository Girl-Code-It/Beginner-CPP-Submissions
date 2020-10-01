#include <bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{
    ll n,i;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++)
      cin >> a[i];
      sort(a,a+n);
      ll store=a[0],count=0,total=0;
      for(i=0;i<n;i++){
           if(store==a[i])
            count++;
           else{
            if(count>1)
                total+=(count*(count-1))/2;
                store=a[i];
                count=1;
               }       }
              if(count>1)
                total+=(count*(count-1))/2;
                cout << total << endl;




    return 0;
}
