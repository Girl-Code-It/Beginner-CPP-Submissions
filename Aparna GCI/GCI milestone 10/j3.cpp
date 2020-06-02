#include<iostream>
#include<stdio.h>
using namespace std;
void fact(int);
int main()
{
    int a;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    fact(a);
    return 0;
}
void fact(int b)
{
    int fact=1;
    if(b==0)
        cout<<"Factorial is : 1"<<endl;
    else
        {
            for(int i=b;i>0;i--)
              {
                 fact*=i;
              }
    cout<<"Factorial is : "<<fact;
        }
}

