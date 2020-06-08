#include <iostream>
using namespace std;

int main()
{
    int num,i,fac=1;

    cout<<"\n Enter a number: ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        fac=fac*i;
    }
    cout<<"\n The factorial of "<<num<<" is : "<<fac;
    return 0;
}
