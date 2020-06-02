#include<iostream>
using namespace std;
int main()
{
    int n,m,a[10],c[10],i,j,k,f,b;
    cout<<"Enter no. of elements in a and the array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Enter no. of elements in c and the array : "<<endl;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>c[i];
    }
    b=(a[n-1]>c[m-1])?a[n-1]:c[m-1];
    for(i=0;i<b;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(i+a[j]==c[k])
                {
                    f++;
                    break;
                }
            }
        }
        if(f==n)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
