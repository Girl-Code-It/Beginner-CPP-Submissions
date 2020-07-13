//Write a C program to find power of a number using for loop.

using namespace std;
#include<iostream>
#include<math.h>
int main()
{
    int num,pow,ans=1;
    cout<<"\n Enter the number :";
    cin>>num;

    cout<<"\n Enter the power :";
    cin>>pow;

    for(int i=1;i<=pow;i++)
    {
        ans*=num;
    }
    cout<<endl<<num<<" ^ "<<pow<<" ="<<ans<<endl;
    return 0;
}
