#include <iostream>
using namespace std;

int main()
{
    long int num,n;
    int i,last,f[10];

    cout<<"\n Enter a number: ";
    cin>>num;
    n=num;

    for(i=0; i<10; i++)
    {
        f[i] = 0;
    }

    while(n>0)
    {
        last=n%10;
        n/=10;
        f[last]++;
    }

    cout<<"\n Frequency of each digit in "<<num<<" is : ";

    for(i=0; i<10; i++)
    {
        cout<<"\n Frequency of "<<i<<" = "<<f[i];
    }

    return 0;
}
