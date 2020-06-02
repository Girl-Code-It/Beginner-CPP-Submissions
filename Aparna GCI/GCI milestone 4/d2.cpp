#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    cout<<"Factors are : "<<" ";
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            cout<<i<<", ";
    }
    return 0;
}
