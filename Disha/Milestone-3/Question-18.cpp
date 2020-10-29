//Write a C program to find frequency of each digit in a given integer.

using namespace std;
#include<iostream>

 int main()
{
    long long num,n,counts[10]={0};

    cout<<"\n Enter a number:";
    cin>>num;
    do
    {
       n=num%10;
       counts[n]++;
       num=num/10;
    }while(num!=0);

    for(int i=0;i<10;i++)
    {
        cout<<"\n Frequency of "<<i<<" is :"<<counts[i];
    }

    return 0;
}
