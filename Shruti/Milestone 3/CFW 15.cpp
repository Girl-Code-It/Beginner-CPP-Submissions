#include <iostream>
using namespace std;

int main()
{
    int num,pro=1;

    cout<<"\n Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        pro*=num%10;
        num=num/10;
    }

    cout<<"\n product of digits: "<<pro;
    return 0;
}
