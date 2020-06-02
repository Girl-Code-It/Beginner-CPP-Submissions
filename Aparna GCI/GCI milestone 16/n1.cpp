#include<iostream>
using namespace std;
int main()
{
    int n,m,g,a[10],t[10],i,c,gap,j;
    c=gap=0;
    cout<<"Enter the values of n, m and g : ";
    cin>>n>>m>>g;
    cout<<endl<<"Enter t and a : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        gap=t[i]-t[i-1];
        {
            for(j=0;j<m;j++)
            {
                if(gap>a[j])
                {
                    c++;
                    g--;

                }
            }
        }
    }
    return 0;
}
