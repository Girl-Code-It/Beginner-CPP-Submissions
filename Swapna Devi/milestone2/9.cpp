#include<iostream>
using namespace std;
int main()
{
    int count,n,mul=1;
    cout<<"Enter number";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<"multiply of"<<n<<"*"<<i<<"="<<(n*i)<<endl;
    }
    return 0;
}