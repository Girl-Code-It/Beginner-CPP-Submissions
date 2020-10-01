//Write a C program to print Fibonacci series up to n terms.

using namespace std;
#include<iostream>
int main()
{
    int n,first=0,second=1,third;
    cout<<"\n Enter the number :";
    cin>>n;
    cout<<"Fibonacci series up to "<<n<<"th term is:"<<first<<","<<second<<",";
    for(int i=0;i<=n-3;i++)
    {
        third=first+second;
        cout<<third<<",";
        first=second;
        second=third;
    }
    return 0;
}
