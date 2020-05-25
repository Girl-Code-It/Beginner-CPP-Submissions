#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,b,t,s,i;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    a=s=t=0;
    b=i=1;
    do
      {
          cout<<s<<" ";
          t=a;
          a=b;
          b=s;
          s=a+b;
          i++;

       }while(s<=n);

   return 0;
}
