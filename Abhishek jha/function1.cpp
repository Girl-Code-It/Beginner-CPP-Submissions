#include<iostream>
using namespace std;
int Sum()
{
    int a,b,sum=0;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    sum=a+b;
    return sum;
}
int main()
{
    int X;
    X=Sum();
    cout<<X;
}