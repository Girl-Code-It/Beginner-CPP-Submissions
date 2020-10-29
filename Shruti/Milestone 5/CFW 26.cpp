#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"\n Enter a number: ";
    cin>>num;

    if(num==1)
        cout<<"\n "<<num<<" is neither prime nor composite.";

    int i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            cout<<"\n "<<num<<" is not a prime number.";
            break;
        }
        i++;
    }
    if(i==num)
        cout<<"\n "<<num<<" is a prime number.";
    return 0;
}
