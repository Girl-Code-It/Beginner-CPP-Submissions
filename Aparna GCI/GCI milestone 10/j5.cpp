#include<iostream>
#include<stdio.h>
using namespace std;
void pf(int);
int main()
{
    int a;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    pf(a);
    return 0;
}
void pf(int b)
{
    for(int i=2;i<=b;i++)
    {
        if(b%i==0)
        {
            int f=1;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                    {
                        f=0;
                        break;
                    }
                else
                    cout<<i<<endl;
            }
            if(f==1)
                cout<<i<<endl;
        }
        else
            cout<<" ";
    }
}
