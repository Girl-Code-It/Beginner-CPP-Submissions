#include<iostream>
#include<stdio.h>
using namespace std;
void strong(int,int);
int main()
{
    int a,b;
    cout<<"Enter the range ";
    cin>>a>>b;
    strong(a,b);
    return 0;
}
void strong(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
            int n=i;
            int s=0;
        while(n!=0)
              {
                  int f=1;
                  int r=n%10;
        for(int j=1;j<=r;j++)
        {
            f*=j;
        }
        s+=f;
        n/=10;
              }
    if(s==i)
    cout<<s<<" ";
    }
}
