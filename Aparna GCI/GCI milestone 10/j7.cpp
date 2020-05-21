#include<iostream>
#include<stdio.h>
using namespace std;
void perfect(int);
int main()
{
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    perfect(a);
    return 0;
}
void perfect(int b)
{
    int cnt=0;
    for(int i=1;i<b;i++)
        if(b%i==0)
    {
        cnt+=i;
    }
    if(cnt==b)
       {
           cout<<"Perfect no."<<endl;
           {
               for(int j=1;j<=1000;j++)
               {
                   int c=0;
                   int num=j;
                   for(int k=1;k<j;k++)
                     {
                      if(j%k==0)
                          {
                             c+=k;
                          }
                     }
                     if(c==num)
                     cout<<"Perfect nos : "<<num<<endl;

               }
           }
       }
       else
        cout<<"Not perfect no. ";

}
