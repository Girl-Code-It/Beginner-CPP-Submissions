#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{

    int n,r,num,n1;
    num=0;
    cout<<"Enter the no."<<endl;
    cin>>n;
    n1=n;
    while(n!=0)
    {
        r=n%10;
        num=num*10+r;
        n=n/10;
    }
    if(n1==num)
      {
        cout<<" palindrome";
       }
    else
        cout<<"not palindrome";

    return 0;
}
