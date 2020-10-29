#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
   ll n,i,j,count=0;
   cin >> n;
   ll  a[n][2];
   for(i=0;i<n;i++){
    for(j=0;j<2;j++)
      cin >> a[i][j];

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
                        count+=a[n-1][0]+a[n-2][0];

                for(i=0;i<n-2;i++)
                {
                    count-=a[i][1];
                }
                cout << count << endl;




    }
    return 0;
}
