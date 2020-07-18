//Write a C program to find all factors of a number.

using namespace std;
#include<iostream>

int main()
{
    int num;
    cout<<"\n Enter the number :";
    cin>>num;
    cout<<"\n All factors of "<<num<<"are :";
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}
