//Write a C program to find HCF (GCD) of two numbers.

using namespace std;
#include<iostream>
int main()
{
    int n1,n2,hcf;
    cout<<"\n Enter first number :";
    cin>>n1;

    cout<<"\n Enter second number :";
    cin>>n2;

    int a=(n1>n2)?n1:n2;
    for(int i=1;i<=a;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<"\n Highest common factor of "<<n1<<" and "<<n2<<" is :"<<hcf<<endl;
    return 0;
}
