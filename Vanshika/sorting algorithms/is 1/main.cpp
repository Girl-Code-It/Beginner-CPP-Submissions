#include <bits/stdc++.h>


using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll i=0,j=0,k,x;
    ll a[n],b[n];
    while(n--){
          cin >> x;
          if(x%2==0)
          {
            a[i]=x;
            i++;
          }else {
               b[j]= x;
               j++;
               }
      }
      sort(a,a+i);
      sort(b,b+j);
 ll temp=0,count=0;
      for(k=0;k<i;k++){
         cout << a[k] << " ";
          temp+=a[k];
                      }
        cout <<  temp << " ";
      for(k=0;k<j;k++){
            cout << b[k] << " ";
          count+=b[k];
                       }
cout << count << " ";



    return 0;
}
