#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    int i;
    char h[15];
    i=1;;
    cout<<"Enter no. in binary form "<<endl;
    cin>>n;
    cout<<"Hexadecimal form is : ";
    while(n!=0)
    {
        int t=n%16;
        if(t<10)
            t+=48;
        else
            t+=55;
        h[i++]=t;
        n/=16;
    }
    for(int j=i-1;j>0;j--)
        cout<<h[j];
    return 0;
}
