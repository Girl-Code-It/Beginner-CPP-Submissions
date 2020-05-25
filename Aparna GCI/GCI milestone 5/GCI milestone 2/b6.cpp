#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the ages"<<endl;
    cin>>a>>b>>c;
   {
       if(a>b&&a>c)
        cout<<"Oldest: "<<a;
    else
        if(b>a&&b>c)
        cout<<"Oldest: "<<b;
    else
        if(c>a&&c>b)
        cout<<"oldest: "<<c;
   }
   {
        if(a<b&&a<c)
        cout<<"youngest: "<<a;
    else
        if(b<a&&b<c)
        cout<<"youngest: "<<b;
    else
        if(c<a&&c<b)
        cout<<"youngest: "<<c;
   }
    return 0;
}
