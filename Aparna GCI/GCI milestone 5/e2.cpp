#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,cnt,p;
    p=0;
    cout<<"Enter no. upto which prime nos. sum have to be displayed "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        cnt=0;
        for(int j=1;j<=i;j++)
        {if(i%j==0)
         cnt++;
        }
        if(cnt==2)

            p+=i;


    }
    cout<<p;

    return 0;
}
