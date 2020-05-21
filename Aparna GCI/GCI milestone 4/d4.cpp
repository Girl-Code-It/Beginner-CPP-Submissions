#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,hcf;
    hcf=0;
    cout<<"Enter two nos. "<<endl;
    cin>>n>>m;
    for(int i=1;i<=n&&i<=m;i++)
    {
        if((n%i==0)&&(m%i==0))
        {
            hcf=i;
        }
    }
    cout<<"HCF is : "<<hcf;
    return 0;
}
