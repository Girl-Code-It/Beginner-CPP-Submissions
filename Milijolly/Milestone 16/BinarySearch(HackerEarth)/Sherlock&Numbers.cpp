
#include <iostream>
using namespace std;

int main() {
        
    int t,n,k,p;
    cin>>t;
    while(t--)
    {   
        cin>>n>>k>>p;
        int ka;

        for(int i=1;i<=k;i++)
        {   
            cin>>ka;
            if(ka<=p)
                p++;
        }

        if(p>n)
            cout<<"-1"<<endl;
        else
            cout<<p<<endl;
        
    }


}
