#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,hcf,lcm;
    hcf=lcm=0;
    cout<<"Enter the nos. "<<endl;
    cin>>n>>m;
    for(int i=1;i<=n&&i<=m;i++)
    {
        if((n%i==0)&&(m%i==0))
        {
            hcf=i;
        }
    }
    lcm=(m*n)/hcf;
    cout<<"LCM is  : "<<lcm;
    return 0;
}
