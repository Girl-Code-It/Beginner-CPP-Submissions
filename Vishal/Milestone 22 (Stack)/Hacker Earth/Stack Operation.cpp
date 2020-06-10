#include <iostream>
using namespace std;
int main() 
{

    long long i,n,k,m=0;
    cin>>n>>k;
    long long a[n];
    for(i=0; i<n; i++) 
    {
        cin>>a[i];
        m=max(a[i],m);
    }
    if (k == n || (n == 1 && k % 2 == 1))
        cout<<-1;
    else if (k>n+1)
        cout<<m;
    else 
    {
        m=-1;
        for (int i= 0; i<k-1; i++)
            m=max(m,a[i]);
        cout<<max(a[k],m);
    }
}