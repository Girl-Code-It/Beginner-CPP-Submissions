#include <iostream>
using namespace std;

int main()
{
    int i,n1,n2,max,lcm;

    cout<<"\n Enter first number: ";
    cin>>n1;
    cout<<"\n Enter second number: ";
    cin>>n2;

    if(n1>n2)
        max=n1;
    else
        max=n2;

    i=max;

    for(i=max; i=i; i+=max)
    {
        if(i%n1==0&&i%n2==0)
        {
            lcm=i;
            break;
        }
    }


    cout<<"\n The LCM of "<<n1<<" and "<<n2<<" is: "<<lcm;

    return 0;
}
