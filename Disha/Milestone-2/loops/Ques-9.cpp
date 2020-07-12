// Write a C program to print multiplication table of any number.

using namespace std;
#include<iostream>
int main()
{
    int n;
    cout<<"\n Enter the number whose multiplication table you want to know :";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<"\t"<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;
}
