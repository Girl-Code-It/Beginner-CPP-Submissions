#include<iostream>
#include<stdio.h>
using namespace std;
void p(int);
void a(int);
void per(int);
int main()
{
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    p(num);
    a(num);
    per(num);
    return 0;
}
void p(int x)
{
    int f=0;
    for(int i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            f=1;
            break;
        }
        if(f==1)
            cout<<"Not Prime"<<endl;
            else
                cout<<"Prime"<<endl;
    }
}
void a(int x)
    {
        int n,s;
        n=x;
        s=0;
        while(n!=0)
          {
             int r=n%10;
             s+=r*r*r;
             n/=10;
          }
        if(x==s)
        cout<<"Armstrong no. "<<endl;
        else
        cout<<"Not armstrong no. "<<endl;
    }
void per(int x)
{
    int s=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            s+=i;
        }
    }
    if(s==x)
        cout<<"Perfect no. "<<endl;
    else
        cout<<"Not perfect no. "<<endl;
}
