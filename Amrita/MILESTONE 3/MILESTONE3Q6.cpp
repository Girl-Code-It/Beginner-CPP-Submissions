
#include<iostream>
using namespace std;

int main ()
{
    int digit,rev=0;
    cout<<"ENTER THE DIGIT \n";
    cin>>digit;
    while (digit>0)
    {
        int num=digit%10;
        rev=(rev*10)+num;
        digit=digit/10;
    }

    cout<<"THE REVERSE OF DIGIT IS \t"<<rev;
    return 0;
}
