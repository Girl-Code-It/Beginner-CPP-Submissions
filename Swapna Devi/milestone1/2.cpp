//Write a program to print a maximum of two numbers?
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter two numbers";
    cin>>n1>>n2;
    if(n1>n2)
    {
	cout<<n1<<" is maximum";
    }
    else
    {
	cout<<n2<<" is  maximum";
    }
}