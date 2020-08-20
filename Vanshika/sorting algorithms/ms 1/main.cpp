#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
            ll i,j=0,k;
              string s1;
             while(getline(cin,s1)){
              int l=s1.size();
               ll start=0,end;
                vector<string> a;
              for(i=0;i<l;i++)
              {

                  if(s1[i]==' '||i==l-1){
                    if(i==l-1)
                        end=i;
                    else end=i-1;
                    string s2;
                  for(k=start;k<=end;k++)
                    s2+=s1[k];
                  a.push_back(s2);
                    start=i+1;


                                 }

              }
              ll n=a.size();

        for(i=0;i<n-1;i++){
                int flag=0;
        for(j=0;j<n-1-i;j++){
                if(a[j].size()>a[j+1].size()){
                  swap(a[j],a[j+1]);
                      flag=1;
                            }
                              }
                            if(flag==0)
                                break;
                               }
            for(i=0;i<n;i++)
                cout << a[i] << " ";


        cout << endl;
    }
    }
    return 0;
}
