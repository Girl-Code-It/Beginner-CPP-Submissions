#include <iostream>
using namespace std;

int main()
{
    int i, num, sum = 0;

    cout<<"\n Enter any number to check perfect number: ";
    cin>>num;

    for(i = 1; i < num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
    {
        cout<<"\n "<<num<<" is a perfect number.";
    }
    else
    {
        cout<<"\n "<<num<<" is not a perfect number.";
    }

    return 0;
}
