#include<iostream>
using namespace std;

int main ()
{
    int digit,sum=0;
    cout<<"ENTER THE DIGIT \n";
    cin>>digit;
    while (digit>0)
    {
        int num=digit%10;
        sum+=num;
        digit=digit/10;
    }

    cout<<"THE SUM OF DIGITS ARE \t"<<sum;
    return 0;
}
