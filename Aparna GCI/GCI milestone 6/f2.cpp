#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s;
    cout<<"Enter no. upto which perfect nos have to be displayed "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {s=0;
        int num=i;
        for(int j=1;j<i;j++)
        {
            if(num%j==0)
            {
                s=s+j;
            }
        }

            if(s==i)
                cout<<i<<endl;

    }
    return 0;
}
