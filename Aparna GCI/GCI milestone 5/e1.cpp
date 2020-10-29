#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,f;
    f=0;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
        }
    }
    if(f==1)
        cout<<"Not Prime ";
    else
        if(f==0)
        cout<<"Prime ";
    return 0;
}
