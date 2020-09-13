using namespace std;
#include<iostream>

int sum (int ,int);

int main()
{
    int a,b,ans;
    cout<<"\n Enter two numbers :";
    cin>>a>>b;
    ans=sum(a,b);
    cout<<"\n Sum of the given two number is :"<<ans<<endl;
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
