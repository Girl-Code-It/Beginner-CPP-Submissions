#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    cout<<"Prime factors are : ";
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                    cout<<j<<" ";
            }
        }
    }
    return 0;
}
