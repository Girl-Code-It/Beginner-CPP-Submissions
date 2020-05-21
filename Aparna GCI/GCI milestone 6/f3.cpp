#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,i,j,f,num,x;
    cout<<"Enter the no. upto which strong no. have to be displayed "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)

  {
      x=0;
       num=i;
       while(num>0)
    {
        f=1;
        r=num%10;
        for(j=1;j<=r;j++)
        {
            f=f*j;
        }
        x+=f;
        num=num/10;
    }
    if(x==i)
       {
           cout<<i<<endl;
       }
  }
    return 0;
}
