
#include<iostream>
using namespace std;

int main ()
{
    int digit,rev=0;
    cout<<"ENTER THE DIGIT \n";
    cin>>digit;
    int orgdigit=digit;
    while (digit>0)
    {
        int num=digit%10;
        rev=(rev*10)+num;
        digit=digit/10;
    }

    if (rev==orgdigit)
        cout<<"THE  DIGIT IS A PALINDROME  ";
    else
        cout<<"NOT A PALINDROME ";
    return 0;
}

