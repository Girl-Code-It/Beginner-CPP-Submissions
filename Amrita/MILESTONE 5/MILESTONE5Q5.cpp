// PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT

#include<iostream>
using namespace std;
int main()
{
    int digit,sum=0;
    cout<<"ENTER THE DIGIT TO CHECK WHETHER IT IS AN ARMSTRONG NUMBER OR NOT\n";
    cin>>digit;
    int dig=digit;
    while (digit>0)
    {
        int n;
        n=digit%10;
        digit=digit/10;
        sum=sum+(n*n*n);
    }
    if (sum==dig)
        cout<<"IT IS AN ARMSTRONG NUMBER ";

    else
        cout<<"IT IS  NOT AN ARMSTRONG NUMBER ";
        return 0;
}
