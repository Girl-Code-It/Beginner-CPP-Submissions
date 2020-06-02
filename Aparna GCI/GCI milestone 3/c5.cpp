#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,r,a[10],cnt;
    cout<<"Enter the no."<<endl;
    cin>>n;
    i=0;

    for(int j=0;j<10;j++)
    {
        cout<<"The frequency of"<<j<<"=";
        cnt=0;
        for(i=n;i>0;i=i/10)
        {
            r=i%10;
            if(r==j)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

