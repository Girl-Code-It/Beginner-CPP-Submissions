#include <iostream>
using namespace std;

int main()
{
    int num,n, rnum=0;

    cout<<"\n Enter a number: ";
    cin>>num;
    n=num;

    while(num!=0)
    {
        rnum*=10;
        rnum+=num%10;
        num/=10;
    }

    cout<<"\n The reversed number is: "<<rnum;

    if(rnum==n)
        cout<<"\n This number is a palindrome.";
    else
        cout<<"\n This number is not a palindrome.";
}
