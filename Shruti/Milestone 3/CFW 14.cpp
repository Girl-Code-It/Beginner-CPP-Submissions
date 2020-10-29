#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;

    cout<<"\n Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        sum+=num%10;
        num=num/10;
    }

    cout<<"\n Sum of digits: "<<sum;
    return 0;
}
