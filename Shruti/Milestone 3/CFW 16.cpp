#include <iostream>
using namespace std;

int main()
{
    int num, rnum=0;

    cout<<"\n Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        rnum*=10;
        rnum+=num%10;
        num/=10;
    }

    cout<<"\n The reversed number is: "<<rnum;
    return 0;
}
