#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int l,b,d,i,base;
    char h[15];
    base=1;
    cout<<"Enter hexadecimal value "<<endl;
    gets(h);
    l=strlen(h);
    for(i=l-1;i>=0;i--)
    {
        if(h[i]>='0'&&h[i]<='9')
        {
            d+=(h[i]-48)*base;
            base*=16;
        }
        else
        if(h[i]>='A'&&h[i]<='F')
        {
            d+=(h[i]-55)*base;
            base*=16;
        }
     }
     cout<<"Decimal value : "<<d;
     return 0;
}
