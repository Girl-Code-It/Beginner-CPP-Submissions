//Write a program to check whether a number is negative, zero, positive
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n>0)
    {
	cout<<n<<" is positive";
    }
    else if(n<0)
    {
	cout<<n<<" is negetive ";
    }
    else
    {
        cout<<n<<"is zero";
    }
    return 0;
}