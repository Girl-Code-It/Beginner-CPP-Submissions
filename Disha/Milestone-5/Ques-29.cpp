//Write a C program to find all prime factors of a number.

using namespace std;
#include<iostream>
int main()
{
    int num,flag;
    cout<<"\n Enter the number :";
    cin>>num;
    cout<<"\n Prime factors of "<<num<<" are :";
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"\t"<<i;
            }
        }
    }
}
