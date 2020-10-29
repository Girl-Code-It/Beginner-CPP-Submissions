#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char h[100];
    int d,i;
    i=0;
    cout<<"Enter no. in decimal form "<<endl;
    cin>>d;
    while(d!=0)
    {
        int t=d%16;
        if(t<10)
        {
            h[i]=t+48;
        }
        else
        {
            h[i]=t+55;
        }
        i++;
        d/=16;
    }
    for(int j=i-1;j>=0;j--)
        cout<<h[j];
    return 0;

}
