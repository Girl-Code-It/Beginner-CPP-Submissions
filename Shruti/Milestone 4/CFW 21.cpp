#include <iostream>
using namespace std;

int main()
{
    int num,exp,power=1;

    cout<<"\n Enter a number: ";
    cin>>num;
    cout<<"\n Enter exponent: ";
    cin>>exp;

    int i;
    for(i=1; i<=exp; i++)
    {
        power=power*num;
    }

    cout<<"\n "<<num<<"^"<<exp<<" = "<<power;
    return 0;
}
