/* Write a C program to print all natural numbers in reverse (from n to 1). - using while loop */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a natural no. ";
    cin>>n;
    for(int i=n;i<=1;i--)
    {
        cout<<i<<endl;
    }
}
