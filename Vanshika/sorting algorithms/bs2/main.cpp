#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
             ll n;
             cin >> n;
             ll a[n][2],i,j;

                for(j=0;j<n;j++){
                  cin >> a[j][0];
                  a[j][1]=j;
                                }
              for(i=0;i<n-1;i++){
                    int flag=0;
                for(j=0;j<n-1-i;j++){

                      if(a[j][0]>a[j+1][0]){
                        swap(a[j][0],a[j+1][0]);
                        flag=1;
                        swap(a[j][1],a[j+1][1]);
                                         }
                                      }
                        if(flag==0)
                            break;


                              }



               for(j=0;j<n;j++)
                    cout << a[j][1] << " ";








    return 0;
}
