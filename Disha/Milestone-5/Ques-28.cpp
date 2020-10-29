//Write a C program to find sum of all prime numbers between 1 to n.

using namespace std;
#include<iostream>
int main()
{
    int num,flag,total=0;
    cout<<"\n Enter the upper limit:";
    cin>>num;
    cout<<"\n Prime number between 1 to "<<num<<" is :";
    for(int i=2;i<=num;i++)
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
            total+=i;
        }
    }
    cout<<"\n Sum of prime number between 1 to "<<num<<" is :"<<total<<endl;
    return 0;
}


