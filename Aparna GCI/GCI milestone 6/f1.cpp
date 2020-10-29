#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s;
    s=0;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            {s=i+s;
            }

    }
    if(s==n)
    cout<<"Perfect no. ";
    else
        cout<<"Not a perfect no. ";
    return 0;
}
