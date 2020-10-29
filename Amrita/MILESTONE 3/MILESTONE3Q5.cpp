#include<iostream>
using namespace std;

int main ()
{
    int digit,prod=1;
    cout<<"ENTER THE DIGIT \n";
    cin>>digit;
    while (digit>0)
    {
        int num=digit%10;
        prod*=num;
        digit=digit/10;
    }

    cout<<"THE PRODUCT OF DIGITS ARE \t"<<prod;
    return 0;
}

