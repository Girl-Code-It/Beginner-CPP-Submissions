#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s,num;
    cout<<"Enter the no. upto which armstrong nos. have to be displayed "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {num=i;
    s=0;
        while(num>0)
        {int r=num%10;
         s+=r*r*r;
         num=num/10;
        }
        if(s==i)

           {cout<<i<<endl;
           }

}
    return 0;
}
