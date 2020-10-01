using namespace std;
#include<iostream>

int sum(int a, int b)
{
    cout<<"\n Sum of the given two number is :"<<a+b<<endl;
}

int main()
{
    int a,b;
    cout<<"\n Enter two numbers :";
    cin>>a>>b;
    sum(a,b);
    return 0;
}

