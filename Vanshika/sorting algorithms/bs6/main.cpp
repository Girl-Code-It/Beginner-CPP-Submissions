#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{

                ll n,k,i,j;
                cin >> n >> k;
                string a[n];
                ll b[n];
                for(i=0;i<n;i++)
                {
                    cin >> a[i];
                    cin >> b[i];
                }
                for(i=0;i<n-1;i++){
                    int flag=0;
                for(j=0;j<n-1-i;j++){
                    if(b[j]>b[j+1]){
                        swap(b[j],b[j+1]);
                        swap(a[j],a[j+1]);
                        flag=1;
                      }else if(b[j]==b[j+1]){
                          int l=a[j].compare(a[j+1]);
                          if(l<1){
                            swap(a[j],a[j+1]);
                            flag=1;
                                }
                                         }
                                     }
                                     if(flag==1)
                                        break;
                                    }

        for(i=n-1;i>n-1-k;i--)
            cout << a[i] << endl;



    return 0;
}
