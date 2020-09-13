//Write a C program to convert Decimal to Binary number system.

using namespace std;
#include<iostream>
int main()
{
    int decimal,num,place=1;
    long long binary=0;
    cout<<"\n Enter a decimal number :";
    cin>>decimal;
    while(decimal!=0)
    {
       num=decimal%2;
       binary+=(num*place);
       place*=10;
       decimal/=2;
    }
    cout<<"\n Binary form of the given decimal number is :"<<binary<<endl;
    return 0;
}
