//Write a C program to print all Prime numbers between 1 to n.
using namespace std;
#include<iostream>
int main()
{
    int num,flag;
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
        }
        else
        {
            continue;
        }
    }

    return 0;
}


