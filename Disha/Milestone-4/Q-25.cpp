//Write a C program to find LCM of two numbers.

using namespace std;
#include<iostream>
int main()
{
    int n1,n2,LCM,g,i;
    cout<<"\n Enter first number :";
    cin>>n1;

    cout<<"\n Enter second number :";
    cin>>n2;

    g=(n1>n2)?n1:n2;
    i=g;
    while(1)
    {
        if(i%n1==0 && i%n2==0)
        {
            LCM=i;
            break;

        }
        i+=g;
    }

    cout<<"\n LCM of "<<n1<<" and "<<n2<<" is :"<<LCM<<endl;
    return 0;
}
