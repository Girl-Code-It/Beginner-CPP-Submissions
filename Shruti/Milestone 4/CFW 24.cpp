#include <iostream>
using namespace std;

int main()
{
    int n1,n2,min,i, hcf;

    cout<<"\n Enter first number: ";
    cin>>n1;
    cout<<"\n Enter second number: ";
    cin>>n2;

    if(n1<n2)
        min=n1;
    else
        min=n2;

    for(i=1; i<=min; i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            hcf=i;
        }
    }

    cout<<"\n HCF of "<<n1<<" and "<<n2<<" is: "<<hcf;

    return 0;
}
