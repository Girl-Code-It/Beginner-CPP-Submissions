#include<iostream>
#include<stdio.h>
using namespace std;
int exp(int,int);
int main()
{
    int a,b;
    cout<<"Enter base and exponent : "<<endl;
    cin>>a>>b;
    int s=exp(a,b-1);
    cout<<s;
    return 0;
}
int exp(int x,int y)
{
    if(y!=0)
    return(x*exp(x,y-1));

}
