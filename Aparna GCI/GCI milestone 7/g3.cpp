#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int d,o;
    int i=0;
    d=0;
    cout<<"Enter octal no. "<<endl;
    cin>>o;
    while(o!=0)
    {
        int rem=o%10;
        int res=rem*pow(8,i);
        d+=res;
        i++;
        o/=10;
    }
    cout<<"Decimal value : "<<d<<endl;
    return 0;
}


