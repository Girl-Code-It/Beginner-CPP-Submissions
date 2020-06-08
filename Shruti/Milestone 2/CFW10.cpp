#include<iostream>
using namespace std;

int main()
{
    long int n, count=0;
    cout<<"\n Enter a number: ";
    cin>>n;

    while(n!=0)
    {
        count++;
        n/=10;
    }
    cout<<"\n Total number of digits: "<<count;
    return 0;
}
