#include <iostream>

using namespace std;

int main()
{
    int num,pro=1;

    cout<< "Enter a number to find product of digits :\n";
    cin>>num;

    while( num>0 )
    {
        pro = pro * (num%10);

        num = num/10;

    }

    cout<< "The product of the digits is "<<pro;

    return 0;
}
