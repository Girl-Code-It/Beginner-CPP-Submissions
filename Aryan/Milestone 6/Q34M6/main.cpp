#include <iostream>

using namespace std;

int main()
{
    int num,x,j,sum=0,orignum;
    long int fact;

    cout<< "Enter a number to check if it is a strong number :\n";
    cin>>num;

    orignum = num;

    while(num>0)
    {
        x = num%10;

        fact=1;

        for(j=1;j<=x;j++)
        {
            fact = fact*j;
        }
        sum = sum + fact;
        num=num/10;

    }

    if(orignum==sum)
        cout<< "It is a strong number ";
    else
        cout<< "It is not a strong number";

    return 0;
}
