#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--){
          ll n,m;
          cin >> n >> m;
          ll a[n],maxsum=0,minsum=0;
          for(int i=0;i<n;i++)
            cin >> a[i];
            for(int k=0;k<n-1;k++)
            {
                bool swapped=false;
                for(int i=0;i<n-1-k;i++)
                {
                    if(a[i]>a[i+1])

                        {
                            swap(a[i],a[i+1]);
                           swapped=true;
                        }
                }
                if(swapped==false)
                    break;

            }

          for(int i=0;i<n-m;i++)
             minsum+=a[i];
           for(int i=n-1;i>m-1;i--)
            maxsum+=a[i];
       cout << maxsum-minsum << endl;



    }
    return 0;
}
