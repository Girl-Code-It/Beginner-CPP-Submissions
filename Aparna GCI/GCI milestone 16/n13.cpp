#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,d,a,m,b,x,i,d1,c,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        cin>>d>>a>>m>>b>>x;
        d1=x-d;
        do
        {
            for(j=0;j<m;j++)
            {
                if(d1>=0)
                {
                    c++;
                    d1=d1-a;
                }
            }
            if(d1>=0)
            {
                d1=d1-b;
                c++;
            }
        }while(d1>=0);
        cout<<c<<endl;
    }
    return 0;
}
