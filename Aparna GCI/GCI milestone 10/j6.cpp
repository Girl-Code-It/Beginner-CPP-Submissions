#include<iostream>
#include<stdio.h>
using namespace std;
int f(int);
int main()
{
    int n,i;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int fi=f(n);
    cout<<fi;
    return 0;
}
int f(int num)
{
    if(num==0)
        return 0;
    else
    if(num==1)
        return 1;
    else
    return(f(num-1)+f(num-2));
}
