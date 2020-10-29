//Write a C program to count number of digits in a number.

using namespace std;
#include<iostream>
int main()
{
    long long num=0;
    int digit=0;
    cout<<"\n Enter the number:";
    cin>>num;

    do
    {
        digit+=1;
        num=num/10;

    }while(num!=0);


    cout<<"\n Total number of digits in the given number is :"<<digit<<endl;
    return 0;
}
