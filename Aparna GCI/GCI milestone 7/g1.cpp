#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,carry,m,b[15],o;
    cout<<"Enter the binary no."<<endl;
    cin>>n;
    int i=0;
    carry=1;
    int a[15],r;
    cout<<"1's compliment "<<endl;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
    }
    cout<<i<<endl;
    for(int k=0;k<i;k++)
    {
        if(a[k]==0)
        {
            a[k]=1;
        }
        else if(a[k]==1)
          {
              a[k]=0;
          }
    }
   for(int l=i-1;l>=0;l--)
    {
       cout<<a[l];
    }
    cout<<endl;
    cout<<endl<<"2's compliment "<<endl;

   for(m=i-1,o=0;m>=0,o<i;m--,o++)
    {
        if(a[m]+1==0&&carry==1)
        {
            b[o]=0;
            carry=1;
        }
        else if(((a[m]+1==1)||(a[m]+0==1)||(a[m]+0==0))&&carry==0)

        {
            b[o]=1;
            carry=0;
        }
        else
            {
                b[o]=a[m];
            }
    }
    for(int c=0;c<i;c++)
    {
        cout<<b[c];
    }
   return 0;
}
